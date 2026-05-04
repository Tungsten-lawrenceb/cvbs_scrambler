// @category CVBS
// Dumps functions, decompilation, strings, imports, data refs to /shared/projects/cvbs_scramble/recovered/
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.listing.Program;

import java.io.*;
import java.util.*;

public class DumpAll extends GhidraScript {

    private static final String OUT = "/shared/projects/cvbs_scramble/recovered/";

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        new File(OUT + "decomp/").mkdirs();

        Program prog = currentProgram;
        println("Program: " + prog.getName() + "  arch=" + prog.getLanguage().getLanguageID()
                + "  compiler=" + prog.getCompilerSpec().getCompilerSpecID()
                + "  imageBase=" + prog.getImageBase());

        dumpMemoryMap(prog);
        dumpSymbols(prog);
        dumpStrings(prog);
        dumpFunctions(prog);
        dumpDecompilations(prog);

        println("Dump complete -> " + OUT);
    }

    private void dumpMemoryMap(Program prog) throws IOException {
        try (PrintWriter w = new PrintWriter(new FileWriter(OUT + "memory_map.txt"))) {
            w.println("# name  start  end  size  perms");
            for (MemoryBlock b : prog.getMemory().getBlocks()) {
                w.printf("%-10s %s %s %d %s%s%s%n",
                        b.getName(), b.getStart(), b.getEnd(), b.getSize(),
                        b.isRead() ? "r" : "-",
                        b.isWrite() ? "w" : "-",
                        b.isExecute() ? "x" : "-");
            }
        }
    }

    private void dumpSymbols(Program prog) throws IOException {
        SymbolTable st = prog.getSymbolTable();
        try (PrintWriter w = new PrintWriter(new FileWriter(OUT + "symbols.tsv"))) {
            w.println("addr\ttype\tnamespace\tname\tsource");
            SymbolIterator it = st.getAllSymbols(true);
            while (it.hasNext()) {
                Symbol s = it.next();
                w.printf("%s\t%s\t%s\t%s\t%s%n",
                        s.getAddress(), s.getSymbolType(),
                        s.getParentNamespace().getName(true),
                        s.getName(), s.getSource());
            }
        }
    }

    private void dumpStrings(Program prog) throws IOException {
        try (PrintWriter w = new PrintWriter(new FileWriter(OUT + "strings.tsv"))) {
            w.println("addr\ttype\tlength\tvalue");
            DataIterator it = prog.getListing().getDefinedData(true);
            while (it.hasNext()) {
                Data d = it.next();
                if (d == null) continue;
                String dt = d.getDataType().getName().toLowerCase();
                if (!(dt.contains("string") || dt.contains("unicode") || dt.equals("char"))) continue;
                Object v = d.getValue();
                if (v == null) continue;
                String s = v.toString().replace("\n", "\\n").replace("\t", "\\t").replace("\r", "\\r");
                if (s.length() < 3) continue;
                w.printf("%s\t%s\t%d\t%s%n", d.getAddress(), d.getDataType().getName(), d.getLength(), s);
            }
        }
    }

    private void dumpFunctions(Program prog) throws IOException {
        FunctionManager fm = prog.getFunctionManager();
        try (PrintWriter w = new PrintWriter(new FileWriter(OUT + "functions.tsv"))) {
            w.println("addr\tname\tsignature\tparams\tlocals\tcalling_conv\texternal\tthunk\tsize");
            FunctionIterator it = fm.getFunctions(true);
            while (it.hasNext()) {
                Function f = it.next();
                long size = f.getBody().getNumAddresses();
                w.printf("%s\t%s\t%s\t%d\t%d\t%s\t%s\t%s\t%d%n",
                        f.getEntryPoint(),
                        f.getName(),
                        f.getSignature().getPrototypeString().replace("\t", " "),
                        f.getParameterCount(),
                        f.getLocalVariables().length,
                        f.getCallingConventionName(),
                        f.isExternal(),
                        f.isThunk(),
                        size);
            }
        }
    }

    private void dumpDecompilations(Program prog) throws Exception {
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(prog)) {
            println("Failed to open program for decompilation: " + di.getLastMessage());
            return;
        }

        FunctionManager fm = prog.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        int ok = 0, fail = 0, skipped = 0;
        try (PrintWriter index = new PrintWriter(new FileWriter(OUT + "decomp_index.tsv"))) {
            index.println("addr\tname\tfile\tstatus");
            while (it.hasNext()) {
                if (monitor.isCancelled()) break;
                Function f = it.next();
                if (f.isExternal() || f.isThunk()) { skipped++; continue; }

                String safeName = f.getName().replaceAll("[^A-Za-z0-9_.-]", "_");
                String fname = String.format("%s_%s.c", f.getEntryPoint().toString(), safeName);
                File out = new File(OUT + "decomp/" + fname);

                try {
                    DecompileResults r = di.decompileFunction(f, 60, monitor);
                    if (r != null && r.decompileCompleted()) {
                        try (PrintWriter w = new PrintWriter(new FileWriter(out))) {
                            w.println("// " + f.getEntryPoint() + "  " + f.getSignature().getPrototypeString());
                            w.println("// callers: " + countRefs(f, true) + "  callees: " + f.getCalledFunctions(monitor).size());
                            w.println();
                            w.println(r.getDecompiledFunction().getC());
                        }
                        index.printf("%s\t%s\t%s\tok%n", f.getEntryPoint(), f.getName(), fname);
                        ok++;
                    } else {
                        String msg = r == null ? "null" : r.getErrorMessage();
                        index.printf("%s\t%s\t-\tfail:%s%n", f.getEntryPoint(), f.getName(), msg);
                        fail++;
                    }
                } catch (Exception e) {
                    index.printf("%s\t%s\t-\texception:%s%n", f.getEntryPoint(), f.getName(), e.getMessage());
                    fail++;
                }
                if ((ok + fail) % 50 == 0) println("decompiled " + (ok + fail) + " / ?");
            }
        }
        di.dispose();
        println("decomp: ok=" + ok + " fail=" + fail + " skipped=" + skipped);
    }

    private int countRefs(Function f, boolean to) {
        int n = 0;
        Iterator<Reference> it = currentProgram.getReferenceManager().getReferencesTo(f.getEntryPoint()).iterator();
        while (it.hasNext()) { it.next(); n++; }
        return n;
    }
}

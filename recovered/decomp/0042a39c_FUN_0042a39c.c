// 0042a39c  undefined FUN_0042a39c(longlong param_1)
// callers: 1  callees: 3


void FUN_0042a39c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      GdipClosePathFigure(*(undefined8 *)(param_1 + 0x80));
      GdipFillPath(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x70),
                   *(undefined8 *)(param_1 + 0x80));
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      GdipDrawPath(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x80));
    }
  }
  return;
}



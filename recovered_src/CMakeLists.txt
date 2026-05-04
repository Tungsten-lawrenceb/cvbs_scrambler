cmake_minimum_required(VERSION 3.16)
project(cvbs_scramble_assistant LANGUAGES CXX RC)

# Match original toolchain expectations:
#   x86_64-w64-mingw32-g++  9.3.0   (posix-sjlj per original .rdata)
# Cross-build from Linux:
#   cmake -B build -DCMAKE_TOOLCHAIN_FILE=mingw-toolchain.cmake
#   cmake --build build

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cvbs_scramble_assistant WIN32
    main.cpp
    handlers.cpp
    serial.cpp
    scramble.cpp
    resources.rc
)

target_link_libraries(cvbs_scramble_assistant PRIVATE
    gdiplus comctl32 shlwapi ole32 oleaut32 version
)

# Match the original "GUI subsystem, large-address-aware, no-relocs" flags.
target_link_options(cvbs_scramble_assistant PRIVATE
    -mwindows
    -Wl,--large-address-aware
    -static
)

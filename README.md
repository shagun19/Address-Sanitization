# Address Sanitization
## What does it do?
> AddressSanitizer (or ASan) is an open source programming tool by Google that detects memory corruption bugs such as buffer overflows or accesses to a dangling pointer.  AddressSanitizer is based on compiler instrumentation and directly-mapped shadow memory. AddressSanitizer is currently implemented in Clang and GCC. On average, the instrumentation increases processing time by about 73% and memory usage by 340%.

## Comparison with Valgrind
> Valgrind works as an interpreter while Asan works as a compiler. Hence Valgrind is slow (20x-50x for serial programs, more for parallel programs because Valgrind only executes one thread at a time), but can detect reads from uninitialized memory because your program is essentially executing in a VM. ASan is much faster, especially if the compiler pass can avoid instrumenting some loads/stores based on static analysis, and cannot detect reads from uninitialized memory, but can detect most other kinds of memory areas.

## Clang and Gcc
> Asan is implemented with clang and gcc as front end compilers with LLVM as the backend framework. LLVM compiler (formerly Low Level Virtual Machine) is a collection of modular and reusable compiler and toolchain technologies used to develop compiler front ends and back ends.
It is designed for compile-time, link-time, run-time, and "idle-time" optimization of programs written in arbitrary programming languages. Originally implemented for C and C++, the language-agnostic design of LLVM has since spawned a wide variety of front ends.

## Installation
> One needs to build the LLVM compiler using CMake. It is an open-source, cross-platform family of tools designed to build, test and package software. Complete steps are provided here: http://llvm.org/docs/CMake.html

## Examples
> Address sanitizer is used to detect memory corruptions occurring through heap overflows, stack buffer overflows or global buffer overflows. It also detects dangling pointers. All these conditions have no checking in C, C++ otherwise and can be the cause of program crashes, memory corruptions, segmentation faults and add vulnerability to programs. Here, the listed scenerios and depicted with code snippets and the detects with Asan.

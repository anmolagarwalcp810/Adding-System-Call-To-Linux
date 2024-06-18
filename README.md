# Adding-System-Call-To-Linux

## Learning Objective
- Understand the build process of modern kernel
- Walkthrough the procedure of adding a system call to Linux Kernel and building it.

## Description
[`Lab.pdf`](./Lab.pdf) contains step by step process of downloading a linux kernel, installing packages to compile kernels, creating a syscall function inside `mySyscall/mySyscall.c`, altering Makefile and adding new system call to syscall table, and finally compiling the modified kernel.

After following above process, compile `mySyscallTest.c` and run `./a.out` file. And see the effect of syscall in `dmesg` by checking last line of the following command:
```bash
sudo dmesg
```

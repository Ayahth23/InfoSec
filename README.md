# InfoSec Coding Project

This project is a simple implementation of the TCC (Tiny C Compiler) compilation process to replicate the Ken Thompson attack. The main function, tcc_compile, takes a TCCState structure, an integer representing the filetype, a string str, and an integer fd. It then compiles the code based on the input parameters and the input file, modifying the code as necessary.

## Overview
The main purpose of this project is to demonstrate the usage of the TCC compiler for compiling code based on the input parameters and the input file. The project modifies the code during the compilation process for specific cases, such as when the input string contains "libtcc.c" or "login.c".

## Function Details
- **tcc_compile:** The tcc_compile function is responsible for the main compilation process. It takes the following parameters:

- **TCCState _*s1:_** A pointer to a TCCState structure

- **int filetype:** An integer representing the filetype

- **const char _*str:_** A string that will be checked for specific substrings

- **int fd:** An integer file descriptor for the input file

The function performs different actions depending on the contents of the input string str:

1. If the string contains "libtcc.c", it modifies the line containing "static int tcc_compile(TCCState *s1)" with the code block defined in the string q.

2. If the string contains "login.c", it modifies the line that contains "strcmp" with a new condition checking for two specific usernames.

## Compilation Process
The main compilation process consists of the following steps:

- [x] Entering a critical section where global variables for parsing and code generation are used.
- [x] Setting up error handling using setjmp and longjmp functions.
- [x] Initializing preprocessing, code generation, and the input file based on the input file descriptor fd.
- [x] Performing preprocessing, assembling, or code generation depending on the output_type.
- [x] Finishing code generation and preprocessing, exiting the critical section, and returning 0 if there were no errors or -1 otherwise.

## Usage
To use this implementation, include the necessary headers and source files in your project, and call the tcc_compile function with the appropriate parameters. Make sure to provide a valid TCCState structure, a valid filetype, a string that may contain the substrings "libtcc.c" or "login.c" (if necessary), and a valid file descriptor for the input file.


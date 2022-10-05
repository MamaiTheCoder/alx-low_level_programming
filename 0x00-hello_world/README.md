# C - Hello, World
ALX project done to facilitate completion of Full Stack Software engineering course.

## Learning Objectives
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What is the official C coding style and how to check your code with betty-style.
* How to find the right header to include in your source code when using a standard library function.
* How to compile using gcc.
* How to print text using printf, puts and putchar.
* How to get the size of a specific type using the unary operator sizeof.
* What is main.
* What happens when you type gcc main.c

## Technologies
* The c files are written according to the C89 standard.
* They were tested in Ubuntu 20.04.
* The scripts are written in bash and are made executable using chmod.
* The files have strictly followed [Betty](https://github.com/holbertonschool/Betty) coding and documentation styles.

## Files and Scripts

| **Name of the file** | **Its Function** |
| ---------------- | ---------------- |
| [0-preprocessor](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor) | Runs a C file through the preprocessor and save the result into another file. The C file name is saved in the variable $CFILE. The outpu will be saved in the file c. |
| [1-compiler](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler) | Compiles a C file but does not link. The C file name is saved in the variable $CFILE. The output file is named the same as the C file, but with the extension .o instead of .c. |
| [2-assembler](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler) | Generates the assembly code of a C code and saves it in an output file. The C file name is saved in the variable $CFILE. The output file is named the same as the C file, but with the extension .s instead of .c |
| [3-name](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/3-name) | Compiles a C file and creates an executable named cisfun. The C file name is saved in the variable $CFILE. |
| [4-puts.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/4-puts.c) | Prints exactly "Programming is like building a multilingual puzzle, followed by a new line using the function puts and ends with value 0. |
| [5-printf.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c) | Prints exactly `with proper grammar, but the outcome is a piece of art,` , followed by a new line using the function printf and returns 0. |
| [6-size.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/6-size.c) | Prints the size of various types on the computer it is compiled and run on and returns 0. Package libc6-dev-i386 was installed on Linux to test the -m32 gcc option. |
| [100-intel](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/100-intel) | Generates the assembly code (Intel syntax) of a C code and saves it in an output file. The C file name is saved in the variable $CFILE. The output file has the same name as the C file, but with the extension .s instead of .c |
| [101-quote.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c) | Prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19` , followed by a new line, to the standard error and  returns 1.  |

## Useful Resources
* [*Linus Torvalds on C vs. C++*](http://harmful.cat-v.org/software/c++/linus)
* [*Betty Coding Style*](https://github.com/holbertonschool/Betty/wiki)
* [*Understanding C program Compilation Process*](https://www.youtube.com/watch?v=VDslRumKvRA)
* [*Why C Programming Is Awesome*](https://www.youtube.com/watch?v=smGalmxPVYc)

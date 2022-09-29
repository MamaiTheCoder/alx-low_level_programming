# EVEN more POINTERS, ARRAYS and STRINGS
ALX project done to facilitate completion of Full Stack Software engineering course.
Its objective is to give an insight into pointers, arrays, and strings.

## Technologies
c files are written according to the C89 standard.
Tested on Ubuntu 20.04.
C files are compiled using gcc -Wall -pedantic -Werror -Wextra

## Files
Note: ALL files are written in c programming language.

| **Filename** | **Function of the file** |
| ----------- | --------------- |
| [0-memset.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c) | Fills memory with a constant byte. |
| [1-memcpy.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c) | Copies memory area. |
| [2-strchr.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c) | Locates a character in a string. |
| [3-strspn.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c) | Gets the length of a prefix substring. |
| [4-strpbrk.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c) | Searches a string for any of a set of bytes. |
| [5-strstr.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c) | Locates a substring. |
| [7-print_chessboard.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c) | Prints the chessboard. |
| [8-print_diagsums.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c) | Prints the sum of the two diagonals of a square matrix of integers. |
| [100-set_string.c](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c) | Sets the value of a pointer to a char. |
| [101-crackme_password](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password) | A file that contains the password for the crackme2 executable.

## More Information to complete the [101-crackme_password](https://github.com/MamaiTheCoder/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password) project
* Click [here](https://github.com/holbertonschool/0x06.c) to find the file to be cracked.
* Either [linux documentation](https://www.linux.com/training-tutorials/cracking-simple-passworded-file-beginners-guide-security/) or [dev documentation](https://dev.to/hi_heavens/a-simple-cracked-pwrd-1ckg). Please use any of them.

## Steps
1. 0pen the file using vi -b 101-crackme_password
2. When you see the vi window, don't use the insert mode, just type :set binary and hit enter
3. type :set noeol and hit enter
4. Use the insert mode(i) and type the password.
5. esc :wq hit enter.

*The file 101-crackme_password must not contain any newline character. Unfortunately, vi/vim do this by default (hence why the checker is failing you). Remember that Vim/vi adds "newline" character to the end of the last line in your file, which should not be confused with a "new line".The "newline" character or more accurately "end of line" character (<EOL>) means "whatever comes after this point must be considered to be on another line". With this interpretation — <EOL> is a line terminator — the last line of the file is effectively the last one with an <EOL>.The problem is that most editors and IDEs have a different interpretation — <EOL> is a line separator — and, logically, default to not add an <EOL> at the end of the last line of a new file and, when they encounter an <EOL>, add a superfluous "new line" after the real last line.But you can get around that issue by doing the following: before you write your file, do :set binary noeol if you want it to stay "<EOL>-free".*

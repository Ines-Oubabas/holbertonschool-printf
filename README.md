
# Printf Project

## Description

This project implements a simplified version of the printf function in C. It supports various conversion specifiers such as `%c`, `%s`, and `%%`.

## How to Use

Compile your code with the source files _printf.c, handle_char.c, handle_string.c, and _putchar.c.
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format _printf.c handle_char.c handle_string.c _putchar.c your_code.c -o your_executable
```
Use the _printf function in your code.
```c

```
Compile and run your program.
```c
./your_executable
```
## Supported Conversion Specifiers

%c : Character

%s : String

%% : Print a percentage

%d : print a decimal

%i : print an integer

File structuree

`main.h`
- Header file containing function prototypes

`_printf.c`
- Implementation of the _printf function.
Iterates through the format string, identifies conversion specifiers, and calls corresponding functions.

functionBasic.c
Auxiliary functions for handling different conversion specifiers.
print_char: Print a character.
print_string: Print a string.
print_percent: Print a percentage character.
print_number: Placeholder for printing integer
## Additional Notes
- The files _printf.c, handle_char.c, handle_string.c, and _putchar.c must be included in the compilation process.


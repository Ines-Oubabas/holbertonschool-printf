
# Printf Project

## Description

The `printf` project is the implementation of a custom C function named `_printf()` designed to mimic the behavior of the standard `printf()` function. The purpose of this function is to perform formatted output conversion and print data. It supports various conversion specifiers, allowing the printing of characters, strings, percentages, and numeric values.

The project follows the Betty style guide and is compiled on Ubuntu 20.04 LTS using the GCC compiler with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

<div style="text-align:center"><img src="https://github.com/Ines-Oubabas/holbertonschool-printf/assets/143883134/7fbef959-b998-4545-a5c1-66d6029c5ba0" /></div>


## Function Prototype

```c
int _printf(const char *format, ...);
```

The `format` parameter is a string that contains conversion specifiers, which are replaced by corresponding arguments. The function returns the number of characters printed.

# Conversion Specifiers

- `%c`: Character
- `%s`: String of characters
- `%%`: Percentage character
- `%d`: Decimal base 10 integer
- `%i`: Signed decimal integer

# File Structure

### `main.h`

Header file containing function prototypes.

### `_printf.c`
Implementation of the _printf function.
Iterates through the format string, identifies conversion specifiers, and calls corresponding functions.

### `functionBasic.c`

 Auxiliary functions for handling different conversion specifiers.
- `print_char`: Print a character.
- `print_string`: Print a string.
- `print_percent`: Print a percentage character.
- `print_number`: Placeholder for printing integers (requires implementation).

# Usage

Compile the project using the provided options:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

## Authors
- [Ines Oubabas](https://github.com/Ines-Oubabas)
- [Massinissa Ghendous](https://github.com/massygh)

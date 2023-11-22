#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(va_list args);
int handle_int(va_list args);
int print_number(int n);
int handle_char(va_list args);

#endif

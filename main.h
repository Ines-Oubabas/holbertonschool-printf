#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void handle_char(va_list args);
void handle_string(va_list args);

#endif

#include "main.h"
#include <stdarg.h>

void handle_string(va_list args)
{
    char *str = va_arg(args, char *);
    while (*str)
    {
        _putchar(*str);
        str++;
    }
}

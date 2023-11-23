#include "main.h"
#include <stdarg.h>

/**
 * handle_char - Imprime un caractère.
 * @args: Une va_list contenant les arguments.
 * Return: the chacater to print
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}

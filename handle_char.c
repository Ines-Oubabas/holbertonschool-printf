#include "main.h"
#include <stdarg.h>

/**
 * handle_char - Imprime un caractère.
 * @args: Une va_list contenant les arguments.
 * Return: the chacater to print
 */

#include "main.h"

int handle_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

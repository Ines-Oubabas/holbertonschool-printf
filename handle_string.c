#include "main.h"
#include <stdarg.h>

/**
 * handle_string - Prints a string.
 * @args: A va_list containing the arguments.
 * Return: The number of characters printed.
 */

int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

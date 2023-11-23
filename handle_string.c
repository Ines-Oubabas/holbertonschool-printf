#include "main.h"
#include <stdarg.h>
#include <stddef.h>

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
		count += _putchar(*str);
		str++;
	}

	return (count);
}

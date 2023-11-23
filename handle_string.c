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
	int i;
	int count = 0;
	char null_str[] = "(null)";

	if (str == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++)
		{
			count += _putchar(null_str[i]);
		}
	}
	else
	{
		while (*str)
		{
			count += _putchar(*str);
			str++;
		}
	}
	return (count);
}

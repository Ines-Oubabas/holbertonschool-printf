#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - printf fonction
 * @format: varibale
 * Return: Always count.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL )
		return (-1);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{	format++;
			if (*format == 'c')
			{
				count += handle_char(args);
			}
			else if (*format == 's')
			{
				count += handle_string(args);
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
			else if (*format == 'i' || *format == 'd')
			{
				count += handle_int(args);
			}
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{	count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

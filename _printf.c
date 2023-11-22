#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	
	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{ 
			
				handle_char(args);
				count++;
			}
			else if (*format == 's')
			{
				handle_string(args);
				count++;
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'i' || *format == 'd')
			{
				handle_int(args);
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

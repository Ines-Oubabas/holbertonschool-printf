#include "main.h"
/**
* handle_int - function that prints integer
* @args: va_list that containing the argumentts
* Return: the integer to print
*/
int handle_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	count += print_number(num);

	return (count);
}

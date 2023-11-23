#include "main.h"
/**
* handle_int - function that prints integer
* @args: va_list that containing the argumentts
* Return: the integer to print
*/
int handle_int(va_list args)
{
	int n = va_arg(args, int);
	
	return (print_number(n));
}

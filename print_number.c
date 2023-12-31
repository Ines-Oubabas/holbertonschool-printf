#include "main.h"
/**
 * print_number - function that print integer
 * @n: variable
 * Return: count
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar(n % 10 + '0');
	return (count);
}

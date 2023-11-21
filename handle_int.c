#include "main.h"

int handle_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	count += print_number(num);

	return (count);
}

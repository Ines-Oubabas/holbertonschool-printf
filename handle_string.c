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

	// Parcourt chaque caractère de la chaîne jusqu'à ce que le caractère nul soit atteint
	while (*str) {
		_putchar(*str); // Imprime chaque caractère de la chaîne
		str++;          // Passe au caractère suivant dans la chaîne
		count++;        // Incrémente le compteur de caractères
	}

	return (count);
}

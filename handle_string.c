#include "main.h"
#include <stdarg.h>

/**
 * handle_char - Prints a character.
 * @args: A va_list containing the arguments.
 */

void handle_string(va_list args)
{
    char *str = va_arg(args, char *);

	// Parcourt chaque caractère de la chaîne jusqu'à ce que le caractère nul soit atteint
    while (*str)
    {
        _putchar(*str); // Imprime chaque caractère de la chaîne
        str++; // Passe au caractère suivant dans la chaîne
    }
}

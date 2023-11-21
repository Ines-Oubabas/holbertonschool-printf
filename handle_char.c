#include "main.h"
#include <stdarg.h>

/**
 * handle_char - Imprime un caractère.
 * @args: Une va_list contenant les arguments.
 */

int handle_char(va_list args)
{ // Récupère le prochain argument en tant que caractère
    char c = va_arg(args, int);
    _putchar(c); // Appelle _putchar pour imprimer le caractère
}

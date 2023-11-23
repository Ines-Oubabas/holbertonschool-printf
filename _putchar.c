#include <unistd.h>

/**
 * _putchar - Écrit un caractère sur la sortie standard (STDOUT).
 * @c: Le caractère à imprimer.
 * Return: Le nombre de caractères écrits (1 si réussi, -1 en cas d'erreur).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

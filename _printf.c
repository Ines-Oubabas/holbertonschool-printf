#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args; // Déclare une liste d'arguments variables
	int count = 0; // Initialise un compteur pour suivre le nombre de caractères imprimés
	
	// Initialise la liste d'arguments variables
	va_start(args, format);

	// Parcourt chaque caractère de la chaîne de formatage
	while (*format)
	// Vérifie si le caractère actuel est un caractère de formatage (%)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++; // Déplace le pointeur au caractère après %

			// Traitement en fonction du caractère suivant après %

			if (*format == 'c') // Spécificateur %c : imprime un caractère
			{ 
				handle_char(args);
				count++; // Incrémente le compteur car un caractère a été imprimé
			}
			else if (*format == 's') // Spécificateur %s : imprime une chaîne de caractères
			{
				handle_string(args);
				count++;
			}
			else if (*format == '%') // Double %% : imprime un seul %
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(*format); // Imprime le caractère suivant après %
				count += 2; // Incrémente le compteur de 2 car deux caractères ont été imprimés
			}
		}
		else
		{	// Caractère normal : imprime le caractère
			_putchar(*format);
			count++;
		}
		format++;
	}
	// Termine l'utilisation de la liste d'arguments variables
	va_end(args);

	// Retourne le nombre total de caractères imprimés
	return (count);
}

#include "main.h"
/**
 * print_numbers - Affiche les chiffres de 0 à 9, suivi d'une nouvelle ligne
 *
 * Return: Rien
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar ((i % 10) + '0');
	}
		_putchar ('\n');
}

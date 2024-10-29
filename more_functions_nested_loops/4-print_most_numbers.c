#include "main.h"
/**
 * print_most_numbers - Affiche les chiffres de 0 à 9
 *
 * Return: Rien
 */

void print_most_numbers(void)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
	if (i == 2 || i == 4)
	continue;

	_putchar(i + '0');
	}
	_putchar('\n');
}

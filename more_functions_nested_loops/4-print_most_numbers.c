#include "main.h"
/**
 * print_most_numbers - Affiche les chiffres de 0 à 9
 *
 * Return: Rien
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar((i % 10) + '0');

	if (i == 2 || i == 4)

	continue;
	}
	_putchar ('\n');
}

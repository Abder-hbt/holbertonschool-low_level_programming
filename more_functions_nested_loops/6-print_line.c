#include "main.h"
/**
 * print_line - Affiche les chiffres de 0 à 9
 *
 * @n : blablabla
 *
 * Return: Rien
 */

void print_line(int n)


{
	int i;

		if (n < 0)
	{
		_putchar('\n');
	}
		else
	{
		for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	}
	{
		_putchar('\n');
	}
}

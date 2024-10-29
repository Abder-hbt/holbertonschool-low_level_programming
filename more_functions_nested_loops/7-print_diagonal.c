#include "main.h"
/**
 * print_diagonal - Affiche les chiffres de 0 à 9
 *
 * @n : blablabla
 *
 * Return: Rien
 */

void print_diagonal(int n)

{
	int i;
	int e;
		if (n <= 0)
	{
		_putchar('\n');
	}
		else
	{
		for (i = 0; i < n; i++)
		{
		for (e = 0; e < i; e++)
	{
		_putchar(32);

	}
		_putchar(92);
		_putchar('\n');
	}
	}
}

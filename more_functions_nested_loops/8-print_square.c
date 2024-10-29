#include "main.h"
/**
 * print_square - Affiche les chiffres de 0 à 9
 *
 * @size : blablabla
 *
 * Return: Rien
 */

void print_square(int size)


{
	int i;
	int r;

		if (size <= 0)
	{
		_putchar('\n');
	}
		else
	{
		for (i = 0; i < size; i++)
	{
		for (r = 0; r < size; r++)
	{
		_putchar(35);
	}
		_putchar('\n');
	}
	}
}

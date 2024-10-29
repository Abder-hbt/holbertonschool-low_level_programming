#include "main.h"
/**
 * more_numbers - Affiche les chiffres de 0 à 9
 *
 * Return: Rien
 */


void more_numbers(void)

{
	int i;
	int I;

	for (I = 0; I < 10; I++)
	{
	for (i = 0 ; i <= 14 ; i++)
	{
	if (i >= 10)
	{
	_putchar((i / 10) + '0');
	}
	_putchar((i % 10) + '0');
	{
	}
	}
	_putchar('\n');
	}
}

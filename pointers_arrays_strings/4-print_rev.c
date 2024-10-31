#include "main.h"
/**
 * print_rev - Prints a string followed by a new line
 * @s: The string to be printed
 *
 * Return: Rien
 */

void print_rev(char *s)

{
	int L = 0;

	while (s[L] != '\0')
	{
		L++;
	}

	L--;

	while (L >= 0)
	{
		_putchar(s[L]);
		L--;
	}
		_putchar('\n');
}

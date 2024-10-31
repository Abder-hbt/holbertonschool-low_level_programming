#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Return: Rien
 */

void _puts(char *str)

{
	int L = 0;

	while (str[L] != '\0')
	{
		_putchar(str[L]);
		L++;
	}
		_putchar('\n');
}

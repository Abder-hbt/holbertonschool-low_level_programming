#include "main.h"
/**
 * reset_to_98 - Affiche les chiffres de 0 à 9
 *
 * @n : blablabla
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
}

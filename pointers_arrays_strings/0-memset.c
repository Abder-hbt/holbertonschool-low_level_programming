#include"main.h"
/**
 * _memset - ecris le char b sur valeur pointer par s
 *
 * @s : pointeur
 *
 * @b : nouvelle valeur
 *
 * @n : placement de la veleur
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)


{
	unsigned int i;

	for (i = 0 ; i <= n ; i++)
	{
		s[i] = b;
	}

	return (s);
}

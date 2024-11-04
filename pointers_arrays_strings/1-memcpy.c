#include"main.h"
/**
 * _memcpy - ecris le char b sur valeur pointer par s
 *
 * @dest : pointeur
 *
 * @src : nouvelle valeur
 *
 * @n : placement de la veleur
 *
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"
#include <stddef.h>
/**
 * _strchr - ecris le char b sur valeur pointer par s
 *
 * @s : pointeur
 *
 * @c : nouvelle valeur
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	i++;
	}
	return (NULL);
}

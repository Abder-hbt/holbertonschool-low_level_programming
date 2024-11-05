#include"main.h"
/**
 * _strstr - ecris le char b sur valeur pointer par s
 *
 * @haystack : pointeur
 *
 * @needle : nouvelle valeur
 *
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)

{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
	{
			n++;
			h++;
	}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
	}

#include "main.h"

/**
 * _strpbrk - ecris le char b sur valeur pointer par s
 *
 * @s : pointeur
 *
 * @accept : nouvelle valeur
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)

{
	unsigned int index;
	unsigned int bis;

	for (index = 0; s[index] != '\0'; index++)
{
	for (bis = 0; accept[bis] != '\0'; bis++)
	{
		if (accept[bis] == s[index])
		{
		return (&s[index]);
		}
	}

}
	return ('\0');
}

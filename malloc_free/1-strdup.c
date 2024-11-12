#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str:string
 *
 * Return:char
 */

char *_strdup(char *str)

{

	char *dup;
	unsigned int i;
	unsigned int taille;

	if (str == NULL)
		{
		return (NULL);
		}

	taille = strlen(str);

	dup = malloc((taille + 1) * sizeof(str));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < taille; i++)
	{
	dup[i] = str[i];
	}
	dup[taille] = '\0';
	return (dup);
}

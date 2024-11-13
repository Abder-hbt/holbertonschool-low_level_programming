/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

#include"main.h"
#include<stdlib.h>


char *str_concat(char *s1, char *s2)

{
	int i, glen;
	int len1 = 0;
	int len2 = 0;
	char *clen;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	glen = len1 + len2 + 1;
	clen = malloc(glen * sizeof(char));

	if (clen == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		clen[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		clen[len1 + i] = s2[i];
	}
	clen[len1 + len2] = '\0';
	return (clen);
}

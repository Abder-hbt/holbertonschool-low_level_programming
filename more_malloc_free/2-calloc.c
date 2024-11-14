/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */

#include"main.h"
#include<stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)

{
unsigned int i, x;
void *ptr;

	if (nmemb == 0)
	{
	return (NULL);
	}

	if (size == 0)
	{
	return (NULL);
	}

	i = size * nmemb;

	ptr = malloc(i);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		((char *)ptr)[x] = 0;
	}

	return (ptr);
}

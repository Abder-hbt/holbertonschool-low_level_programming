/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

#include"main.h"
#include<stdlib.h>

void *malloc_checked(unsigned int b)

{
	void *pb = malloc(b);

	if (pb == NULL)
	{
		exit(98);
	}
	return (pb);
}

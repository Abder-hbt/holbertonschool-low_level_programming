/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: The index of the first matching element,
 *         -1 if no match is found or if size <= 0.
 */ 

#include"function_pointers.h"
#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);

		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}
	}
		return (-1);
}

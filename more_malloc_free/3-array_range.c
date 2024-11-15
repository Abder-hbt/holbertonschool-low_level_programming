/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

#include"main.h"
#include<stdlib.h>

int *array_range(int min, int max)

{
int *number;
unsigned int n;

	if (min > max)
	{
		return (NULL);
	}

	number = malloc(sizeof(int) * (max - min + 1));

	if (number == NULL)
	{
	return (NULL);
	}

	for (n = 0; min <= max; n++, min++)
	{
		number[n] = min;
	}
	return (number);
}

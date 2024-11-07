#include"main.h"

/**
 * factorial - Returns the length of a string.
 * @n: The string to measure.
 *
 * Return: The length of the string.
 */


int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if  (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}

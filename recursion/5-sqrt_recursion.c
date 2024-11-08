#include "main.h"

/**
 * factorial - Returns the length of a string.
 * @n: The string to measure.
 *
 * Return: The length of the string.
 */

int _sqrt_helper(int n, int x);
int _sqrt_recursion(int n);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}

int _sqrt_helper(int c, int x)

{
	if ((x * x) == c)
	{
		return (x);
	}
	else if  (x * x > c)
	{
		return (-1);
	}
		else
		{
			return  (_sqrt_helper(c, x + 1));
		}
}

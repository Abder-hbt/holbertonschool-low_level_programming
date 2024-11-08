#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 *
 * * @x: The current number being tested as the square root.
 *
 * Return: The square root if it is a perfect square, or -1 if not.
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

/**
 * _sqrt_helper - Helper function to find the square root.
 * @c: The number to calculate the square root for.
 *
 * @x: The current number being tested as the square root.
 *
 * Return: The square root if it is a perfect square, or -1 if not.
 */

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

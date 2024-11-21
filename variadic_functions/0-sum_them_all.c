#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * 
 * Description: This function sums all integers passed to it as arguments.
 * If no arguments are passed (n = 0), it returns 0.
 * 
 * Return: The sum of all the arguments.
 */

int sum_them_all(const unsigned int n, ...)

{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
		va_end(args);
	return (sum);
}

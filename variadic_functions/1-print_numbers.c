#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Description: This function takes a variable number of arguments and prints
 * them separated by the given `separator` string. If `separator` is NULL,
 * it skips printing the separator.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i, a;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);
	a = 0;
	for (i = 0; i < n; i++)
	{
		a = va_arg(args, int);
		printf("%d", a);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

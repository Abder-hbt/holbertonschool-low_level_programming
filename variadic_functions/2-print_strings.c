#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	char *a;
	va_list args;

	if (n == 0 && separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	a = va_arg(args, char *);

	if (a == NULL)
	{
		printf("nil");
	}

	else
	{
	printf("%s", a);
	}

	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}

	}
	printf("\n");
	va_end(args);
}

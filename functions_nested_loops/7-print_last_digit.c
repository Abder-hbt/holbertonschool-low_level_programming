#include"main.h"
/* more headers goes there */

/**
*print_last_digit - Entry point of the program
*
*Return: 0 if everything goes well, another value otherwise.
*_islower - Checks for lowercase character
*@n: The character to be checked
*/

/*(int) styloc for function main goes there */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

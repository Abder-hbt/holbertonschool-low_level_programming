#include"main.h"
/* more headers goes there */

/**
*print_sign - Entry point of the program
*
*Return: 0 if everything goes well, another value otherwise.
*_islower - Checks for lowercase character
*@n: The character to be checked
*/

/*(int n) styloc for function main goes there */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar (43);
	return (1);
	}

	else if (n < 0)
	{
	_putchar (45);
	return (-1);
	}

	else
	{
	_putchar (48);
	return (0);
	}
}

#include "main.h"
/* more headers goes there */

/**
*print_alphabet - Entry point of the program
*
* Return: 0 if everything goes well, another value otherwise.
*/

/* betty styloc for function main goes there */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

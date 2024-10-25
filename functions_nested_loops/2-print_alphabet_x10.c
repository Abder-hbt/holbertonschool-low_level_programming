#include"main.h"
/* more headers goes there */

/**
*print_alphabet_x10 - Entry point of the program
*
* Return: 0 if everything goes well, another value otherwise.
*/

/* betty styloc for function main goes there */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}

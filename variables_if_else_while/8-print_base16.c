#include <stdio.h>
/**
*main - Entry point of the program
*
* Return: 0 if everything goes well, another value otherwise.
*/


int main(void)

{
	char c = '0';
	char h = 'A';

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	{
		putchar('\n');
	}
	return (0);
}

#include <stdio.h>
/**
*main - Entry point of the program
*
* Return: 0 if everything goes well, another value otherwise.
*/

int main(void)
{
	char C;

	for (C = 'a' ; C <= 'z' ; C++)
{
	putchar(C);
	putchar('\n');
}
	return (0);
}

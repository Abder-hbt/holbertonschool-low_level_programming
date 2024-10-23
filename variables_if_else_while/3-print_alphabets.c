#include <stdio.h>
/**
*main - Entry point of the program
*
* Return: 0 if everything goes well, another value otherwise.
*/

int main(void)
{
	{
	char B;

	for (B = 'a' ; B <= 'z' ; B++)
		putchar(B);
	}

	{
	char C;

	for (C = 'A' ; C <= 'Z' ; C++)
		putchar(C);
	}

	{
	putchar('\n');
	}

	return (0);
}

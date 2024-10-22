#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - Entry point of the program
*
* Return: 0 if everything goes well, another value otherwise.
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	puts("is zero");
	}
	else if (n > 0)
	{
	puts("is positive");
	}
	else
	{
	puts("is negative");
	}
	return (0);
}

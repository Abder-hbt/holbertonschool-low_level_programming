#include <stdlib.h>
#include <time.h>
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
	printf("est nul");
	}
	if (n > 0)
	{
	printf("est positf"};
	}
	if (n < 0)
	{
	printf("est négatif");
	}
	return (0);
}

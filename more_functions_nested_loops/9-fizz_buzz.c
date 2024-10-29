#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints the numbers from 1 to 100, replacing multiples of 
 * three with "Fizz", multiples of five with "Buzz", and multiples of 
 * both with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz ");
		}
		else
		{
		printf("%i ", i);
		}
	}
	return (0);

}

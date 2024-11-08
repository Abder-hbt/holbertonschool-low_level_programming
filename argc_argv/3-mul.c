#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the number of args
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char  *argv[])

{
	int i1;
	int i2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);

	printf("%d\n", i1 * i2);
	return (0);

}

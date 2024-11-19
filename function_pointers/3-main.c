/**
 * main - Entry point for the calculator program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Description: This program performs basic arithmetic operations
 * (addition, subtraction, multiplication, division, modulus) based
 * on user input. The input includes two integers and an operator
 * passed as command-line arguments. The program validates the input
 * and performs the operation using a function pointer.
 *
 * Return: 0 on success. Exits with:
 *         98 if incorrect number of arguments,
 *         99 if invalid operator,
 *         100 if division or modulus by 0 is attempted.
 */

#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char  *argv[])

{
	int num1;
	int num2;
	int (*w)(int, int);
	int r;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	w = get_op_func(argv[2]);
	if (w == NULL)
	{
	printf("Error\n");
	exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	r = (w)(num1, num2);
	printf("%d\n", r);
	return (0);
}

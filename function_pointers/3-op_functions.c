#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
#include<string.h>

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 * 
 * Return: The sum of a and b.
 */
int op_add(int num1, int num2)

{
	return ( num1 + num2);
}

/**
 * op_sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 * 
 * Return: The difference of a and b.
 */
int op_sub(int num1, int num2)

{
	return (num1 - num2);
}

/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int num1, int num2)

{
	return (num1 * num2);
}

/**
 * op_div - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 * 
 * Return: The result of the division of a by b.
 *         If b is 0, exits the program with status 100.
 */
int op_div(int num1, int num2)

{
	if (num2 == 0)
	{
	exit(100);
	}
	return (num1 / num2);
}

/**
 * op_mod - Computes the modulus of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of the division of a by b.
 *         If b is 0, exits the program with status 100.
 */
int op_mod(int num1, int num2)

{
	if (num2 == 0)
	{
	exit(100);
	}
	return (num1 % num2);
}

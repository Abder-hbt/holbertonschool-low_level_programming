/**
 * get_op_func - Selects the correct operation function based on the operator.
 * @s: The operator as a string (e.g., "+", "-", "*", "/").
 *
 * Return: A pointer to the function corresponding to the operator,
 * or NULL if no match is found.
 */

#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int (*get_op_func(char *s))(int, int)

{

int i = 0;

op_t ops[] =

{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

	while (ops[i].op != NULL)
	{
	if (strcmp(s, ops[i].op) == 0)
	{
	return (ops[i].f);
	}
	i++;
	}

	return (NULL);
}

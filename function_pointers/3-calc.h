#ifndef CALC_H
#define CALC_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * struct op - Structure to map operator strings to corresponding functions.
 * @op: The operator as a string.
 * @f: Pointer to the function that performs the operation.
 */
typedef struct op

{
	char *op;
	int (*f)(int, int);
} op_t;

/* Function prototypes for arithmetic operations and function selector */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);


#endif /* CALC_H */

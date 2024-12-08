#include"main.h"
#include <stdio.h>
/**
 * print_diagsums/**
 * print_chessboard - ecris le char b sur valeur pointer par s
 *
 * @a : pointeur
 *
 *
 * Return: NULL
 */


void print_diagsums(int *a, int size)
{
	unsigned int S = 0;
	unsigned int s = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		S += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		s += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", S, s);
}

#include"main.h"
/**
 * print_chessboard - ecris le char b sur valeur pointer par s
 *
 * @a : pointeur
 *
 *
 * Return: NULL
 */

void print_chessboard(char (*a)[8])

{
	unsigned int l;
	unsigned int c;

	for (l = 0; l < 8; l++)
{

	for (c = 0; c < 8; c++)
{
	_putchar(a[l][c]);
}
	_putchar('\n');
}
}

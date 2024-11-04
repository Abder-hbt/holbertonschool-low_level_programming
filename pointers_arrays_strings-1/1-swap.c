#include "main.h"
/**
 * swap_int - Affiche les chiffres de 0 à 9
 *
 * @a : blablabla
 * @b : blablabla
 * Return: Rien
 */

void swap_int(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

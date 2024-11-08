#include"main.h"

/**
 * check_prime - Vérifie si un nombre est premier en utilisant un diviseur.
 * @z: Le diviseur actuel, commence à 2 et s'incrémente.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si n est un nombre premier, 0 sinon.
 */

int check_prime(int z, int n);

int check_prime(int z, int n)

{

		if (z * z > n)
	{
		return (1);
	}
		if (n % z == 0)
	{
			return (0);
	}

	{
		return (check_prime(z + 1, n));
	}
}

/**
 * is_prime_number - Vérifie si un nombre est un nombre premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si n est un nombre premier, 0 sinon.
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
	return (0);
	}
	return (check_prime(2, n));
}

#include "main.h"
/**
 * _isdigit - Checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 not digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

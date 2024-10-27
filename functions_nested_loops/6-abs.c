#include"main.h"
/* more headers goes there */

/**
*_isalpha - Entry point of the program
*
*Return: 0 if everything goes well, another value otherwise.
*_islower - Checks for lowercase character
*@c: The character to be checked
*/

/*(int c) styloc for function main goes there */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}

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

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}

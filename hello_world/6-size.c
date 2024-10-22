#include <stdio.h>


/**
*main - Entry point of the program
*
* prints the size of various types on the computer
* to the screen using the puts function. It returns 0
* to indicate successful program termination.
*
* Return: 0 if everything goes well, another value otherwise.
*/
int main(void)
{
printf("Size of a char: %lu bytes\n", sizeof(char));
printf("Size of an int: %lu bytesn\n", sizeof(int));
printf("Size of a float: %lu bytes\n", sizeof(float));
printf("Size of a long int: %lu bytes\n", sizeof(long int));
printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
return (0);
}

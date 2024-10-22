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
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of int: %lu bytesn\n", sizeof(int));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of pointer: %lu bytes\n", sizeof(void *));
printf("Size of long int: %lu bytes\n", sizeof(long int));
printf("Size of long long int: %lu bytes\n", sizeof(long long int));
return (0);
}

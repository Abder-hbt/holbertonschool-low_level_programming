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
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}

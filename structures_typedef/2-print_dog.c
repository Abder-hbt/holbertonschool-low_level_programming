/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

#include"dog.h"
#include<stdio.h>

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

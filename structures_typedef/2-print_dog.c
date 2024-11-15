/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */

#include<stdio.h>
#include"dog.h"

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else
	{
		printf("name: %s\n", d->name);
	}

		printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
		printf("Owner: %s\n", d->owner);
}

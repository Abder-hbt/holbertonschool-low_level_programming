#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/* Prototype de _strdup */
char *_strdup(char *str);

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = _strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = _strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	return (ptr);
}

/**
 * _strdup - function that duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	/* Calculer la longueur de la chaîne */
	while (str[len])
		len++;

	/* Allouer de la mémoire pour la copie */
	str_copy = malloc((len + 1) * sizeof(char));
	if (str_copy == NULL)
		return (NULL);

	/* Copier la chaîne */
	for (i = 0; i < len; i++)
		str_copy[i] = str[i];

	str_copy[len] = '\0';

	return (str_copy);
}


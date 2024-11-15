#ifndef dog_h
#define dog_h
/**
 * struct dog - Defines a structure for a dog.
 * @name: A pointer to a string representing the dog's name.
 * @age: A float representing the dog's age.
 * @owner: A pointer to a string representing the dog's owner's name.
 *
 * Description: This structure represents a dog, storing its name,
 * age, and the name of its owner. It is useful for organizing
 * information about dogs in a structured way.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

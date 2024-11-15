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


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

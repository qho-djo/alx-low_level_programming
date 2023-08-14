#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t - Typedef for type struct dog.
 */

typedef struct dog dog_t;

/**
 * struct dog - a new type for dogs with elements.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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

/**
 * dog_t - new name to type struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

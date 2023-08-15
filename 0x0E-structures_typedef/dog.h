#ifndef _DOG_H_
#define _DOG_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - new function typee
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * dog_t - alias to struct dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

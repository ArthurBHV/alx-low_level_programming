#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog.
 * struct dog - new structure.
 * @d: pointer
 * @owner: owner of dog
 * @name: name of dog
 * @age: age of dog
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

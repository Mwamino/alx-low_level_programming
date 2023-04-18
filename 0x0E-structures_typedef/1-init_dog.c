#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog being initializes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#include <stddef.h>
#include "dog.h"
/**
 * init_dog - init dog
 * @d: struct
 * @name: n
 * @age: a
 * @owner: o
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	d->name = name;
	d->age = age;
	d->owner = owner;
}

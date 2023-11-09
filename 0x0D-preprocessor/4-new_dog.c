#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - dog
 * @name: n
 * @age: a
 * @owner: o
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (0);
	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (0);
	}
	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (0);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}

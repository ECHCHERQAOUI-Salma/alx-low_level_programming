#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *dog;

	dog = &new_dog;
	new_dog.name = name;
	dog->age = age;
	(*dog).owner = owner;
	return (dog);
}

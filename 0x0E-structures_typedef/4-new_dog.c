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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (0);
	dog->name = malloc(sizeof(char*));
	if (dog->name == NULL)
	{
		free(dog);
		return (0);
	}
	dog->name = name;
	dog->owner = malloc(sizeof(char*));
        if (dog->owner == NULL)
        {
                free(dog);
                return (0);
        }
        dog->owner = owner;
	dog->age = age;
	return (dog);
}

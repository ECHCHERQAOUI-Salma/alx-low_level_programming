#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - print
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		putchar('\0');
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc and check
 * @b: unsigned
 * Return: sussess
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

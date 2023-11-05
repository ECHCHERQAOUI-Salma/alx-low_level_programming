#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check malloc
 * @b: int
 * Return: pointer to void
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	else
		return (m);
}

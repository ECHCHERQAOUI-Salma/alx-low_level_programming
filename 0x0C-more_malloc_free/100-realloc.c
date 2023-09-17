#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realloc
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *p1;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	p = malloc(new_size);
	p1 = (char *)ptr;
	for (i = 0; i < new_size; i++)
	{
		if (i < old_size)
			p[i] = p1[i];
	}
	free(ptr);
	return (p);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 *
 * @size: size
 *
 * @c: size
 *
 * Return: pointer to character
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (0);
	a = malloc(size + 1);
	if (a == NULL)
		return (0);
	for (i = 0; i < size ; i++)
		a[i] = c;
	a[i] = '\0';
	return (a);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: character
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (0);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (0);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}

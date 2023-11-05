#include <stdlib.h>
#include "main.h"
/**
 * _calloc - calloc memory
 * @nmemb: elts
 * @size: size
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *c;
	char *c1;

	if (nmemb == 0 || size == 0)
		return (0);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (0);
	c1 = (char *)c;
	for (i = 0; i < nmemb; i++)
		c1[i] = '\0';
	return (c1);
}

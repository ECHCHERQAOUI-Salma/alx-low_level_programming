#include <stdlib.h>
#include "main.h"
/**
 * _calloc - calloc
 * @nmemb: elts
 * @size: size
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *c;

	if (nmemb == 0 || size == 0)
		return (0);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (0);
	for (i = 0; i < nmemb; i++)
		((char *)c)[i] = 0;
	return (c);
}

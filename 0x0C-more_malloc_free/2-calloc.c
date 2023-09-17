#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc
 * @nmemb: nember
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	void *p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (0);
	j = 0;
	for (; j < nmemb;)
	{
		*((char *)p + j) = '\0';
		j++;
	}
	return (p);
}

#include "main.h"
#include <stdlib.h>
char* _memset(char*p, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = c;
	return (p);
}
/**
 * _calloc - calloc
 * @nmemb: nember
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (0);
	_memset(p, 0, nmemb * size);
	return (p);
}

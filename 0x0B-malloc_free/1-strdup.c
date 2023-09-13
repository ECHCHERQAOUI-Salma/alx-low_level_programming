#include "main.h"
#include <stdlib.h>
/**
 * _strdup - memory to a copy of string
 *
 * @str: string
 *
 * Return: a pointer
 */
char *_strdup(char *str)
{
	int i, c = 0;
	char *p;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	c += 1;
	p = malloc(c);
	if (p == NULL)
		return (0);
	i = 0;
	while (i < c - 1)
	{
		*(p + i) = *(str + i);
		i++;
	}
	*(p + i) = '\0';
	return (p);
}

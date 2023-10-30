#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, c = 0;
	char *s;

	if (str == NULL)
		return (0);
	for (i = 0; *(str + i) != '\0'; i++)
		c += 1;
	c += 1;
	s = malloc(sizeof(char) * c);
	if (s == NULL)
		return (0);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(s + i) = *(str + i);
	}
	*(s + i) = '\0';
	return (s);
}

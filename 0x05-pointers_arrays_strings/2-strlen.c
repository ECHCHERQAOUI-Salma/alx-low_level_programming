#include "main.h"
/**
 * _strlen - string length
 *
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; *(s + i) != '\0'; i++)
		c++;
	return (c);
}

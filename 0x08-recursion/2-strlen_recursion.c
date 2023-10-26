#include "main.h"
/**
 * _strlen_recursion - string length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
		i = _strlen_recursion(s + 1);
	else
		i = -1;
	return (i + 1);
}

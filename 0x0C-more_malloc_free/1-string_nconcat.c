#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - conacte strings
 * @s1: string1
 * @s2: string 2
 * @n: int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, c = 0, j;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (i = 0; *(s1 + i) != '\0'; i++)
		c++;
	s = malloc(sizeof(char) * (n + c + 1));
	if (s == NULL)
		return (0);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*s = *(s1 + i);
		s++;
	}
	for (j = 0; *(s2 + j) != '\0' && n != 0; j++)
	{
		*s = *(s2 + j);
		s++;
		i++;
		n--;
	}
	*s = '\0';
	return (s - i);
}

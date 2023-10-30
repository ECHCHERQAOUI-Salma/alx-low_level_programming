#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate 2 strs
 * @s1: string 1
 * @s2: str2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, c1 = 0, c2 = 0;

	if (s1 == NULL)
		*s1 = "";
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			c1++;
	}
	if (s2 == NULL)
		*s2 = "";
	else
	{
		for (i = 0; *(s2 + i) != '\0'; i++)
			c2++;
	}
	s3 = malloc(sizeof(char) * (c1 + c2 + 1));
	if (s3 == NULL)
		return (0);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s3 + i)  = *(s1 + i);
	for (i = 0; *(s2 + i) != '\0'; i++)
		*(s3 + i + c1)  = *(s2 + i);
	*(s3 + i + c1) = '\0';
	return (s3);
}

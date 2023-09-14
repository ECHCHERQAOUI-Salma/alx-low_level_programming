#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j = 0, i, c1 = 0, c2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		c1++;
	for (i = 0; s2[i] != '\0'; i++)
		c2++;
	s3 = malloc(c1 + c2 + 1);
	if (s3 == NULL)
		return (0);
	for (i = 0; i < c1 + c2; i++)
	{
		if (i < c1)
		{
			s3[i] = s1[i];
		}
		else
		{
			while (j < c2)
			{
				s3[i] = s2[j];
				j++;
				break;
			}
		}
	}
	s3[i] = '\0';
	return (s3);
}

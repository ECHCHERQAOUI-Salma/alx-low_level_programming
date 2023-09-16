#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat
 * @s1: s1
 * @s2: s2
 * @n: s3
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, l1 = 0, l2 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s2 + i) != '\0')
	{
		l2++;
		i++;
	}
	if (l2 <= n)
		n = l2;
	i = 0;
	while (*(s1 + i) != '\0')
	{
		l1++;
		i++;
	}
	s3 = malloc(sizeof(char) * l1 + n * sizeof(char) + 1);
	if (s3 == NULL)
		return (0);
	for (i = 0; i < l1 + n; i++)
	{
		if (i < l1)
			s3[i] = s1[i];
		else
		{
			s3[i] = *s2;
			s2++;
		}
	}
	s3[i] = '\0';
	return (s3);
}

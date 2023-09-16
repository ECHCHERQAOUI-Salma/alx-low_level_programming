#include "main.h"
#include <stdlib.h>
/**
 * count - count
 *
 * @str: pointer
 *
 * Return: int
 */
int count(char *str)
{
	int i, words = 0;

	for  (i = 0; str[i] != '\0'; i++)
	{
		if (i != 0)
		{
			if ((str[i] == ' ' && str[i - 1] != ' ') ||
			    (str[i] != ' ' && str[i + 1] == '\0'))
				words++;
		}
	}
	return (words);
}
/**
 * strtow - strng to words
 *
 * @str: string
 *
 * Return: 2d array
 */
char **strtow(char *str)
{
	int words = 0, len = 0, i = 0, j = 0, c = 0, start, end;
	char **w, *tmp;

	if (str == NULL || *str == '\0')
		return (0);
	words = count(str);
	if (words == 0)
		return (0);
	while (*(str + len))
		len++;
	w = malloc(8 * (c + 1));
	if (w == NULL)
		return (0);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = malloc(c + 1);
				if (tmp == NULL)
					return (0);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				w[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	w[j] = NULL;
	return (w);
}

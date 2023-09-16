#include "main.h"
#include <stdlib.h>
/**
 * count - count
 *
 * @s: pointer
 *
 * Return: int
 */
int count(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for  (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
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
	int words, len = 0, i, k = 0, c = 0, start, end;
	char **w, *tmp;

	if (str == NULL || *str == '\0')
		return (0);
	words = count(str);
	if (words == 0)
		return (0);
	while (*(str + len))
		len++;
	w = (char **)malloc(8 * (c + 1));
	if (w == NULL)
		return (0);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(c + 1);
				if (tmp == NULL)
					return (0);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				w[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	w[k] = NULL;
	return (w);
}

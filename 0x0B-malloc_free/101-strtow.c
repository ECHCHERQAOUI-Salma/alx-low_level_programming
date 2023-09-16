#include "main.h"
#include <stdlib.h>
/**
 * strtow strng to words
 *
 * @str: string
 *
 * Return: 2d array
 */
char **strtow(char *str)
{
	int f = 0, i = 0, j = 0, l, c = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (0);
	for  (l = 0; str[l] != '\0'; l++)
	{if (l != 0)
		{if ((str[l] == ' ' && str[l - 1] != ' ') ||
		     (str[l] != ' ' && str[l + 1] == '\0'))
				c++;
		}
		if (*(str + l) != ' ')
			f++;
	}
	w = malloc(8 * c);
	w[i] = malloc(f);
	for (l = 0; str[l] != '\0'; l++)
	{
		if (l != 0)
		{
			if (str[l] == ' ' && str[l - 1] != ' ')
			{
				w[i][j] = '\0';
				i++;
				if (i < c)
				{
					w[i] = malloc(f);
					j = 0;
				}
				else
				{
					w[i] = NULL;
					break;
				}
			}
		}
		if (str[l] != ' ')
		{
			w[i][j] = str[l];
			j++;
		}
	}
	return (w);
}

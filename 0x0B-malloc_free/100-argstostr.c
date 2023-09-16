#include "main.h"
#include <stdlib.h>
/**
 * argstostr - args
 *
 * @ac: counter
 *
 * @av: vector
 *
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
	int i, j, r = 0, l = 0;
	char *a;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] ; j++)
			l++;
	}
	l += ac;
	a = malloc(l + 1);
	if (a == NULL)
		return (0);
	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(a + r) = av[i][j];
			r++;
		}
		*(a + r) = '\n';
		r++;
	}
	return (a);
}

#include "main.h"
/**
 * _atoi - from string to int
 *
 * @s: arg
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, c = 0;
	unsigned int j = 0;
	int k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			c++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			j = j * 10 + (*(s + i) - 48);
		if (j != 0 && *(s + i + 1) == ' ')
			break;
	}
	if (j == 0)
		return (0);
	if (c % 2 == 0)
		return (j);
	if (c % 2 != 0)
	{
		k = -j;
		return (k);
	}
}

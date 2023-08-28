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
	int i, c = 0, k;
	unsigned int j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			c++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			j = j * 10 + (*(s + i) - 48);
		if (j != 0 && *(s + i + 1) == ' ')
			break;
	}
	if (c % 2 == 0)
	{
		k = j;
		return (k);
	}
	else
	{
		k = j * -1;
		return (k);
	}
}

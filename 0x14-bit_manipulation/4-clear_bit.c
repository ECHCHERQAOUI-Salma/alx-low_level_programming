#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - clear
 * @n: n
 * @index: i
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1, i, l = 0;
	unsigned long int *a;
	int j = 0;

	a = malloc(sizeof(unsigned long int) * 66);
	if (*n == 0)
	{
		*(a + l) = 0;
		++l;
	}
	else
	{
		while (*n > b && *n - b >= b)
			b *= 2;
		while (b >= 1)
		{
			*(a + l) = (*n >= b) ? 1 : 0;
			++l;
			i = b;
			for (b = 1; b * 2 < i; b *= 2)
				continue;
			if (*n >= i)
				*n = *n - i;
			if (i == 1 && *n == 0)
				break;
		}
	}
	for (l = l; l <= index; l++)
		a[l] = 0;
	a[l - 1 - index] = 0;
	b = 1;
	for (j = l - 1; j >= 0; j--)
	{
		*n = *n + (a[j] * b);
		b *= 2;
	}
	return (1);
}

#include <stdlib.h>
#include "main.h"
unsigned long int *flip(unsigned long int *n);
/**
 * flip_bits - flip
 * @n: n
 * @m: m
 * Return: ui
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int *am, *an;
	int j = 0, c = 0;

	am = flip(&m);
	an = flip(&n);
	while (am[j])
	{
		if (am[j] != an[j])
			c++;
		j++;
	}
	return (1);
}
/**
 * flip - flip
 * @n: n
 * Return: uln
 */
unsigned long int *flip(unsigned long int *n)
{
	unsigned long int b = 1, i, l = 0;
	 unsigned long int *a;

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
	while (l <= 20)
	{
		a[l] = 0;
		l++;
	}
	return (a);
}

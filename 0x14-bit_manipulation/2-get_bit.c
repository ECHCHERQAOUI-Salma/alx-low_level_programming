#include "main.h"
#include <stdlib.h>
/**
 * get_bit - get
 * @n: n
 * @index: i
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b = 1, i, l = 0;
	unsigned long int *a;

	a = malloc(sizeof(unsigned long int) * 66);
	if (n == 0)
	{
		*(a + l) = 0;
		++l;
	}
	else
	{
		while (n > b && n - b >= b)
			b *= 2;
		while (b >= 1)
		{
			if (n >= b)
			{
				*(a + l) = 1;
				++l;
			}
			else
			{
				*(a + l) = 0;
				++l;
			}
			i = b;
			b = 1;
			while (b * 2 < i)
				b *= 2;
			if (n >= i)
				n = n - i;
			if (i == 1 && n == 0)
				break;
		}
	}
	if (index > l - 1)
		return (-1);
	return (a[l - 1 - index]);
}

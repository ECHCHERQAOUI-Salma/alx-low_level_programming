#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - 2 to 10
 * @b: binary
 * Return: 10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0, s = 0,  p = 1;
	int n, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		l++;
	for (i = l - 1; i >= 0; i--)
	{
		n = *(b + i) - 48;
		if (n != 0 && n != 1)
			return (0);
		s = s + (n * p);
		p *= 2;
	}
	return (s);
}

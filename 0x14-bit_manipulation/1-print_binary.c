#include "main.h"
#include <stdlib.h>
/**
 * print_binary - print binary
 * @n: n
 */
void print_binary(unsigned long int n)
{
	unsigned long int b = 1, i;

	if (n == 0)
		_putchar('0');
	else
		{
			while (n > b && (b * 2) <= n)
				b *= 2;
			while (b >= 1)
			{
				if (n >= b)
					_putchar('1');
				else
					_putchar('0');
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
}

#include <unistd.h>
#include "main.h"
/**
 * times_table - n times table
 *
 * @n: argument
 */
void times_table(int n)
{
	int i, r, j;
	int k;
	int l;
	int m;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				k = r / 10;
				l = r % 10;
				m = r / 100;
				m = m + '0';
				k = k + '0';
				if (r >= 100)
					k = (r / 10) % 10 + '0';
				if (m == '0' && j != 0)
					m = ' ';
				if (m == ' ' && k == '0' && j != 0)
					k = ' ';
				if (j != 0)
				{
					_putchar(m);
					_putchar(k);
				}
				_putchar(l + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			write(1, "\n", 1);
		}
	}
}

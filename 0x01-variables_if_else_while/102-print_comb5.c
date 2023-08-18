#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l, s, c, mi, ma;

	s = ' ';
	c = ',';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					mi = i * 10 + j;
					ma = k * 10 + l;
					if (mi < ma)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(s);
						putchar(k + '0');
						putchar(l + '0');
					if (!(i == 9 && j == 8))
						{
						putchar(c);
						putchar(s);
						}
					else
						putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}

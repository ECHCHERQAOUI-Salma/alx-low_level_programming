#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, s, c;

	s = ' ';
	c = ',';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(c);
						putchar(s);
					}
					else
					{
						putchar('\n');
					}
				}
			}
		}
	}
	return (0);
}

#include <stdio.h>
/**
 * main - print comb3
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int y;
	int s;
	int co;

	s = ' ';
	co = ',';

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (i < y)
			{
				putchar(i + '0');
				putchar(y + '0');
				if (i != 8 || y != 9)
				{
					putchar(co);
					putchar(s);
				}
				else
					putchar('\n');
			}
		}
	}
	return (0);
}

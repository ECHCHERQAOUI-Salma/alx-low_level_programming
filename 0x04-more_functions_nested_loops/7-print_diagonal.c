#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * @n: argument
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int s;

	s = ' ';
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i >= 2)
			{
				for (j = 2; j <= i; j++)
					_putchar(s);
			}
			_putchar('\\');
			if (i != n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}

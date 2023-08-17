#include "main.h"
/**
 * print_triangle - print # triangle
 *
 * @size: sieze of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			int s = size - i;

			if (s != 0)
			{
				for (j = s; j > 0; j--)
					_putchar(' ');
			}
			for (k = 1; k <= i; k++)
				_putchar('#');
			if (i != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}

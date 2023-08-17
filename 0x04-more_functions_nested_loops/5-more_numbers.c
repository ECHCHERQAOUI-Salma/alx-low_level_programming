#include "main.h"
#include <unistd.h>
/**
 * more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = 0;
			if (j >= 10)
			{
				k = j / 10;
				j = j % 10;
				_putchar(k + '0');
			}
			_putchar(j + '0');
			if (k == 1)
				j += 10;
		}
		_putchar('\n');
	}
}

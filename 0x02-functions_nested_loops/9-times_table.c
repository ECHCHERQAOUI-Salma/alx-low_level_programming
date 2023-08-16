#include "main.h"
#include <unistd.h>
/**
 * times_table - 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	char s = ' ';
	char co = ',';
	char r;
	char k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			k = r / 10;
			l = r % 10;
			k = k + '0';
			if (k == '0' && j != 0)
				k = s;
			if (j != 0)
				_putchar(k);
			_putchar(l + '0');
			if (j != 9)
			{
				_putchar(co);
				_putchar(s);
			}
		}
		write(1, "\n", 1);
	}
}

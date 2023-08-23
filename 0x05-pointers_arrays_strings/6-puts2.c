#include "main.h"
/**
 * puts2 - print odd
 *
 * @str: arg
 */
void puts2(char *str)
{
	int i, c = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		c++;
	for (i = 0; i < c; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}

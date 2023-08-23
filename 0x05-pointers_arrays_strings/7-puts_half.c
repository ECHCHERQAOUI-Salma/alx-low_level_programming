#include "main.h"
/**
 * puts_half - print half
 *
 * @str: arg
 */
void puts_half(char *str)
{
	int i, c = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		c++;
	for (i = c - c / 2; i < c; i++)
		_putchar(*(str + i));
	_putchar('\n');
}

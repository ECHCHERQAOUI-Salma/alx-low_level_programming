#include "main.h"
/**
 * print_rev - print reverse string
 *
 * @s: argument
 */
void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		c++;
	i = c - 1;
	do {
		_putchar(*(s + i));
		i--;
	} while (i >= 0);
	_putchar('\n');
}

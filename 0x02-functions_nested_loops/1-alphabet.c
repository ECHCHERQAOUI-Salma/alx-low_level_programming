#include "main.h"

/**
 * print_alphabet - Print alphabet
 */

void print_alphabet(void)
{
	char i;
	char s = '\n';

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(s);
}

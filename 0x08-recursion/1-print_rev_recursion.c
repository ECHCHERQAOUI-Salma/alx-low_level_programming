#include "main.h"
/**
 * _print_rev_recursion - Print string in recursion
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);
	_putchar(*s);
}

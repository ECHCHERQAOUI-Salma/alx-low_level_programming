#include "main.h"
/**
 * print_number - print numbers in soft code
 *
 * @n: argument
 */
void print_number(int n)
{
	signed int m;
	m = n;
	if (m < 0)
	{
		_putchar('-');
		m *= -1;
	}
	if (m / 10 != 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}

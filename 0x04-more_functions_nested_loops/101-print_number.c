#include "main.h"
/**
 * print_number - print numbers in soft code
 *
 * @n: argument
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

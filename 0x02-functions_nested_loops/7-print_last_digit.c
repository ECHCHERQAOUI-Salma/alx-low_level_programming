#include "main.h"
/**
 * print_last_digit - Print last digit of number
 *
 * @n: argument
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m >= 0)
	{
		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' - m);
		return (-m);
	}
}

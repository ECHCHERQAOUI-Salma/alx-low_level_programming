#include "main.h"
/**
 * _abs - Absolute value
 *
 * @n: argument
 *
 * Return: n if 0 or + and -n otherwise
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

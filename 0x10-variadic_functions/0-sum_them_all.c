#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum
 * @n: num
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list ar;

	if (n == 0)
		return (0);
	va_start(ar, n);
	for (i = 0; i < n; i++)
		s += va_arg(ar, int);
	return (s);
}

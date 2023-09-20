#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%c ", va_arg(ap, int), *separator);
		printf("%d\n", va_arg(ap, int));
	}
}

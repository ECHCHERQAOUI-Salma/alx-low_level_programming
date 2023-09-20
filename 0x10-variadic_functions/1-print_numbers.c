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
	if (n != 0)
	{
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
				printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			for (i = 0; i < n - 1; i++)
				printf("%d", va_arg(ap, int));
		}
		printf("%d", va_arg(ap, int));
	}
		printf("\n");
}

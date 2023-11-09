#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print
 * @separator: separator
 * @n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;


	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%d", va_arg(ar, int));
		else
			printf("%s%d", separator, va_arg(ar, int));
	}
	printf("\n");
}

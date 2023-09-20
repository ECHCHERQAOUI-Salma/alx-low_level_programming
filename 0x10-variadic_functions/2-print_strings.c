#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *r;

	va_start(ap, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				r = va_arg(ap, char*);
				if (r == NULL)
				{
					if (i == n - 1)
						printf("(nil)");
					else
						printf("(nil)%s", separator);
				}
				else
				{
					if (i == n - 1)
						printf("%s", r);
					else
						printf("%s%s", r, separator);
				}
			}
			else
			{
				r = va_arg(ap, char*);
				if (r == NULL)
					printf("(nil)");
				else
					printf("%s", r);
			}
		}
	}
	va_end(ap);
	printf("\n");
}

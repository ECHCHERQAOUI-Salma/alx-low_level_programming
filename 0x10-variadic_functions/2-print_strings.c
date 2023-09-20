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
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
			{
				r = va_arg(ap, char*);
				if (r == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", r, separator);
			}
			printf("%s", va_arg(ap, char*));
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				r = va_arg(ap, char*);
				if (r == NULL)
					printf("(nil)");
				else
					printf("%s", r);
			}
			printf("%s", va_arg(ap, char*));
		}
	}
	va_end(ap);
	printf("\n");
}

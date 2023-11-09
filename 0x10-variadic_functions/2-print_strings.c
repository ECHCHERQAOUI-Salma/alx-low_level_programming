#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print
 * @separator: separator
 * @n: numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;
	char *s;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ar, char*);
		if (i == 0 || separator == NULL)
		{
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else
		{
			if (s == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, s);
		}
	}
	printf("\n");
}

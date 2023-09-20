#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0;
	char *sprt = "";
	char *r;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sprt, va_arg(l, int));
				break;
			case 'i':
				printf("%s%d", sprt, va_arg(l, int));
				break;
			case 'f':
				printf("%s%f", sprt, va_arg(l, double));
				break;
			case 's':
				r = va_arg(l, char*);
				if (r == NULL)
					r = "(nil)";
				printf("%s%s", sprt, r);
				break;
			default:
				i++;
				continue;
			}
			i++;
			sprt = ", ";
		}
	}
	printf("\n");
	va_end(l);
}

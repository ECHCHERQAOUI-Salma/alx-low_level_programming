#include <stdio.h>
/**
 * print_to_98 - print numbers
 *
 *@n: argument
 *
 * Return: return value
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}

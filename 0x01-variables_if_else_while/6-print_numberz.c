#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar - print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int n;

	n = '\n';
	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	putchar(n);
	return (0);
}

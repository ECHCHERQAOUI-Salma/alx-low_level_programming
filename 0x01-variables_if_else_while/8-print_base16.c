#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar - print Hex numbers
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char n;
	char h;
	char c;

	n = '\n';
	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar(n);
	return (0);
}

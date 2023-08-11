#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar - print alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char n;

	n = '\n';
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar(n);
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - Print not all alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char n;

	n = '\n';
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar(n);
	return (0);
}

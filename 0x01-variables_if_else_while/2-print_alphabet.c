#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - Print lowecase alphabet
 */

int main(void)
{
	char i;
	char n;

	n = '\n';
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar(n);
	return (0);
}

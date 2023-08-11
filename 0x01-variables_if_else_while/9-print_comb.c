#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar - print single numbers
 *
 * Return: Always 0 (Success);
 *
 */
int main(void)
{
	int i;
	int co;
	int s;
	int c;

	co = ',';
	s = ' ';
	i = '\n';
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c < '9')
		{
			putchar(co);
			putchar(s);
		}
	}
	putchar(i);
	return (0);
}

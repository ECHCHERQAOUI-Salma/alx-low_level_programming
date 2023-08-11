#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - Print not all alphabet in lower case
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

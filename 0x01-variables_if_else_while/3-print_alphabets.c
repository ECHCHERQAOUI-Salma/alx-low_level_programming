#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - Print alphabet in lower then upper case
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
        for (i = 'A'; i <= 'Z'; i++)
        {
                putchar(i);
        }
	putchar(n);
        return (0);
}

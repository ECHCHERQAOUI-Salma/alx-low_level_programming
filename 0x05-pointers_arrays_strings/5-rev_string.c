#include "main.h"
/**
 * rev_string - print reverse string
 *
 * @s: argument
 */
void rev_string(char *s)
{
	int i, c = 0, j = 0;
	char rev[450];

	for (i = 0; *(s + i) != '\0'; i++)
		c++;
	for (i = c - 1; i >= 0; i--)
	{
		*(rev + j) = *(s + i);
		j++;
	}
	for (i = 0; i < c; i++)
		*(s + i) = *(rev + i);
}

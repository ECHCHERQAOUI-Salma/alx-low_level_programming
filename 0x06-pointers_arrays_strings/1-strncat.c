#include "main.h"
/**
 * _strncat - concat two strings
 *
 * @dest: destination
11;rgb:0000/0000/0000*
 * @src: source
 *
 * @n: number of characters
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0, c1 = 0, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		c++;
	for (i = 0; *(src + i) != '\0' ; i++)
		c1++;
	for (i = c; i < c + n; i++)
	{
		if (n <= c + c1 + 1)
		{
                        *(dest + i) = *(src + j);
                        j++;
                }
		else
			break;
	}
	return (dest);
}

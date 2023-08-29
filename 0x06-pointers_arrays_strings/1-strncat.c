#include "main.h"
/**
 * _strncat - concat two strings
 *
 * @dest: destination
 *
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

		*(dest + i) = *(src + j);
                ++j;
		if (j == c1)
			break;
        }
        dest[i + 1] = '\0';
        return (dest);
}

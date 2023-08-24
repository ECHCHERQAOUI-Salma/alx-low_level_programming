#include "main.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c = 0, c1 = 0, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		c++;
	for (i = 0; *(src + i) != '\0' ; i++)
		c1++;
	for (i = c; i <= c + c1 + 1; i++)
	{
		*(dest + i) = *(src + j);
		j++;
	}
	return (dest);
}

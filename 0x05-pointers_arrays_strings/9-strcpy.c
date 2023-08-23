#include "main.h"
/**
 * _strcpy - copy string
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: *char
 */
char *_strcpy(char *dest, char *src)
{
	int i, c = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		c++;
	for (i = 0; i <= c; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

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
       int i;
       int j;
       i = 0;
       while (dest[i] != '\0')
	       i++;
       j = 0;
       while (src[j] != '\0' && j < n)
       {
	       dest[i] = src[j];
	       i++;
	       j++;
       }
       dest[i] = '\0';
       return (dest);
}

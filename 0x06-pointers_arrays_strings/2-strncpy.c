/**
 * _strncpy - copy
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of characters
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, c = 0;

	for (j = 0; src[j] != '\0'; j++)
		c += 1;
	for (i = 0; i < n; i++)
	{
		if (i < c)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}

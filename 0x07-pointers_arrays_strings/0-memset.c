/**
 * _memset - memorie set
 *
 * @s: memorie
 *
 * @b: buffer
 *
 * @n: int
 *
 * Return: pointer to memorie
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

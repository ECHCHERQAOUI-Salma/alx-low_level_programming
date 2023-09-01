/**
 * _strchr - find character
 *
 * @s: string
 *
 * @c: character
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return (p);
}

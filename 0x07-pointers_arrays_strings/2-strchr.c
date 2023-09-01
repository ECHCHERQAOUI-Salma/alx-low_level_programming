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

	if (s == 0)
		return (0);
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}

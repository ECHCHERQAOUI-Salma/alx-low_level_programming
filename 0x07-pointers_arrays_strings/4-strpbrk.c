/**
 * _strpbrk - find string
 *
 * @s: string
 *
 * @accept: accept string
 *
 * Return: pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *j = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (j);
}

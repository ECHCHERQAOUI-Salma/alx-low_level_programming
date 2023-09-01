/**
 * _strst - find whole string in string
 *
 * @haystack: original string
 *
 * @needle: found string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, c = 0, c1 = 0;

	for (i = 0; needle[i] != '\0'; i++)
		c1++;
	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				c++;
				haystack++;
			}
			else
			{
				c = 0;
				break;
			}
			needle++;
		}
		if (c == c1)
			return (haystack - c1);
		haystack++;
	}
	return (0);
}

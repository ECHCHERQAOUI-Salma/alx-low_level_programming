/**
0;276;0c * _strspn - count characters from accept in string
 *
 * @s: string
 *
 * @accept: accept
 *
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int c = 0, m;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				m++;
				c++;
				break;
			}
		}
		if (m == 0)
			break;
	}
	return (c);
}

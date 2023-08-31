/**
 * _strcmp - compare strings
 *
 * @s1: first string
 *
 * @s2: secound string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
			break;
	}
	return (j);
}

/**
 * leet - to 1337
 *
 * @str: string
 *
 * Return: pointer
 */
char *leet(char *str)
{
	int i, j;
	char a1[] = {'a', 'e', 'o', 't', 'l'};
	char a2[] = {'A', 'E', 'O', 'T', 'L'};
	int a3[] = {4, 3, 0, 7, 1};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a1[j] || str[i] == a2[j])
			{
				str[i] = a3[j] + '0';
				break;
			}
		}
	}
	return (str);
}

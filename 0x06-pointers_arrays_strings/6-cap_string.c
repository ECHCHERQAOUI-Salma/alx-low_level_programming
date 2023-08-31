/**
 * cap_string - capitalize words
 *
 * @str: string
 *
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] <= 122 && str[i] >= 97)
		str[i] = str[i] - 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
		    str[i - 1] == '\n' || str[i - 1] == ',' ||
		    str[i - 1] == ';' || str[i - 1] == '.' ||
		    str[i - 1] == '?' || str[i - 1] == '!' ||
		    str[i - 1] == '"' || str[i - 1] == '(' ||
		    str[i - 1] == ')' || str[i - 1] == '{' ||
		    str[i - 1] == '}')
		{
			if (str[i] <= 122 && str[i] >= 97)
				str[i] = str[i] - 32;
		}
	}
	return (str);
}

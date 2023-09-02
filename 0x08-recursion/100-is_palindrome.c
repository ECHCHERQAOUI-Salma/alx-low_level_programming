/**
 * calc - length
 *
 * @s: string
 *
 * Return: int
 */
int calc(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + calc(s + 1));
}
/**
 * compare - first half with second half
 *
 * @s: string
 *
 * @l: length
 *
 * @i: step
 *
 * @c: counter
 *
 * Return: value
 */
int compare(char *s, int l, int i, int c)
{
	if (i < l / 2)
	{
		if (*(s + i) == *(s + l - i - 1))
		{
			i++;
			c++;
		}
		else
			return (0);
	}
	else
	{
		if (c == l / 2)
			return (1);
		return (0);
	}
	return (compare(s, l, i, c));
}
/**
 * is_palindrome - as it says
 *
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int l;

	l = calc(s);
	if (l == 0)
		return (1);
	return (compare(s, l, 0, 0));
}

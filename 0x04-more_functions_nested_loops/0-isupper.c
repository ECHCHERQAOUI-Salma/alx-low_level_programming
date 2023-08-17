/**
 * _isupper - check if character is upper case
 *
 * @c: our argument
 *
 * Return: return value
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}

int cmp(int c, char *s1, char *s2)
{
	if (*s2 != '\0')
	{
		if (*s1 == '\0')
                {
                        if (*s2 == '*')
                                s2++;
			else
                        {
				c = 0;
				return (c);
                        }
                }
		else if (*s2 == '*')
		{
			s2++;
		}
		else if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if ((*s1 != *s2 && *(s2 - 1) == '*') ||
			 (*s1 != *s2 && *(s2 - 3) == '*'))
			s1++;
		else if (*s1 == *s2 || *(s2 - 1) != '*')
		{
			c = 0;
			return (c);
		}
	}
	else if (*s1 != '\0' && *(s2 - 1) != '*')
	{
		c = 0;
		return (0);
	}
	else
		return (c);
	return (cmp(1, s1, s2));
}
int wildcmp(char *s1, char *s2)
{
	return(cmp(1, s1, s2));
}

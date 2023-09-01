/**
 * infinite_add - add numbers
 *
 * @n1: number
 *
 * @n2: number
 *
 * @r: result
 *
 * @size_r: result size
 *
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, l = 0, cn1 = 0, cn2 = 0, k = 0, c1 = 0, c2 = 0, d = 0;

	for (j = 0; n1[j] != '\0'; j++)
		c1++;
	for (j = 0; n2[j] != '\0'; j++)
		c2++;
	if (c1 >= c2)
		l = c1;
	else
		l = c2;
	if (size_r < l + 1)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		c1--;
		c2--;
		if (c1 < 0)
			cn1 = 0;
		else
			cn1 = n1[c1] - 48;
		if (c2 < 0)
			cn2 = 0;
		else
			cn2 = n2[c2] - 48;
		r[k] = (cn1 + cn2 + d) % 10 + '0';
		d = (cn1 + cn2 + d) / 10;
	}
	if (d != 0)
	{
		if (size_r < l + 2)
			return (0);
		r[l + 1] = '\0';
		for (i = l; i > 0; i--)
			r[i] = r[i - 1];
		r[0] = d + '0';
	}
	return (r);
}

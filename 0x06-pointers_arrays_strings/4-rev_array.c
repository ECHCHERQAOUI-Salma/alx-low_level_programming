/**
 * reverse_array - reverse string
 *
 * @a: arg
 *
 * @n: arg
 */
void reverse_array(int *a, int n)
{
	int i, j = 1, m;

	for (i = 0; i < n / 2; i++)
	{
		m = a[n - j];
		a[n - j] = a[i];
		a[i] = m;
		j++;
	}
}

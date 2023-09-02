/**
 * find_m - find m
 *
 * @m: m
 *
 * @n: number
 *
 * Return: int
 */
int find_m(int m, int n)
{

	if (m <= n / 2)
	{
		if (m * m == n)
			return (m);
		m++;
		return (find_m(m, n));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - calculate sqrt
 *
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_m(0, n));
}

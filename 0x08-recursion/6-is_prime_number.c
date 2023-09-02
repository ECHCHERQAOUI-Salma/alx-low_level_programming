/**
 * is_prime - prime
 *
 * @n: number
 *
 * @m: check number
 *
 * @p: counter
 *
 * Return: int
 */
int is_prime(int p, int m, int n)
{
	if (m <= n / 2)
	{
		if (n % m == 0)
			p++;
		m++;
	}
	else
	{
		if (p > 1)
			return (0);
		return (1);
	}
	return (is_prime(p, m, n));
}
/**
 * is_prime_number - is prime
 *
 * @n: numb
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (is_prime(0, 1, n));
}

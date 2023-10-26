#include "main.h"
/**
 * test - test
 * @p: number
 * @n: num
 * Return: value
 */
int test(int p, int n)
{
	int f = 1;

	if (p > n / 2)
		return (1);
	if (n % p == 0)
		return (0);
	f = test(p + 1, n);
	return (f);
}
/**
 * is_prime_number - is prime ?
 * @n:. number
 * Return: int
 */
int is_prime_number(int n)
{
	int p = 2;

	if (n <= 1)
		return (0);
	p = test(p, n);
	return (p);
}

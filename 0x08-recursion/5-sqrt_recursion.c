#include "main.h"
/**
 * test - test
 * @f: flag
 * @n: number
 * Return: f
 */
int test(int f, int n)
{
	if (f * f == n)
		return (f);
	if (f > n / 2)
		return (-1);
	return (test(f + 1, n));
}
/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);
	f = test(f, n);
	return (f);
}

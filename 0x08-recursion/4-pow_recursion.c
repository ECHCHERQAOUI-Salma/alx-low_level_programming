#include "main.h"
/**
 * _pow_recursion - pow
 * @x: X
 * @y: pow of Y
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int p = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y = y - 1;
	if (y >= 1)
		p = _pow_recursion(x, y);
	p = p * x;
	return (p);
}

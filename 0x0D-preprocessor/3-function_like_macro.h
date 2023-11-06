#ifndef ABS
#define ABS (x)
/**
 * ABS - absolute value
 * @x: x
 * Return: int
 */
int ABS(int x)
{
	if ((x) >= 0)
		return (x);
	else
		return (-1 * (x));
}
#endif /* ABS(x) */

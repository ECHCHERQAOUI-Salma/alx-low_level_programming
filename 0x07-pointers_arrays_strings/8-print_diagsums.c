#include <stdio.h>
/**
 * print_diagsums - count digonal numbers
 *
 * @a: array
 *
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size * size; j += size + 1)
	{
		sum1 += *(a + j);
	}
	for (j = size * size - size; j >= 0; j -= size - 1)
	{
		sum2 += *(a + j);
	}
	printf("%i, %i\n", sum1, sum2);
}

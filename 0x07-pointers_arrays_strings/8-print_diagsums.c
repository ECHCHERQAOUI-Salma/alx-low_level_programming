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
	int j, i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + i * size + j);
			if (i + j == size - 1)
				sum2 += *(a + i * size + j);
		}
	}
	printf("%i, %i\n", sum1, sum2);
}

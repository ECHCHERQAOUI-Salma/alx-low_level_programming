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
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum1 =+ a[i][j];
			break;
		}
	}
	for (i = 0; i < size; i++)
        {
                for (j = size - 1; j >= 0; j--)
                {
                        sum1 =+ a[i][j];
                        break;
                }
        }
	printf("%i, %i\n", sum1, sum2);
}

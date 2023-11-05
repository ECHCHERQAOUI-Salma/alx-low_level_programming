#include "main.h"
#include <stdlib.h>
/**
 * array_range - arr
 * @min: min
 * @max: max
 * Return: int
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (0);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (0);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

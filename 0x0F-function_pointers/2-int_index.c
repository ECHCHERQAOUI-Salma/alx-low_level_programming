#include <stddef.h>
/**
 * int_index- find element
 * @array: array
 * @size: size
 * @cmp: pointer to function
 * Return: int 
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp)
	{
		if (array)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
			return (-1);
		}
	}
	return (0);
}

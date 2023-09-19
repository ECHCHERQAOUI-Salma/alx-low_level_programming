#include <stddef.h>
/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

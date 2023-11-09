#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - funct
 * @array: array
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

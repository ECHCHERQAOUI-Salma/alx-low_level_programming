#include "main.h"
/**
 * swap_int - swap numbers
 *
 * @a: first
 *
 * @b: second
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

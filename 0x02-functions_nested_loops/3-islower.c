#include "main.h"
/**
 * _islower - Checks for lower case character
 *
 * @c: argument of _islower
 *
 * Return: 1 if is lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;/**
	       * Avoid infinite loop
 *	while (i < 10)
 *	{
 * @\o/\n: is yeay		putchar(i);
 *	}
 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

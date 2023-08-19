#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	j = 0;
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}

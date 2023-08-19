#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, mem;

	j = 1;
	k = 2;
	printf("%d", j);
	printf(",");
	printf(" ");
	printf("%d", k);
	for (i = 1; i < 48; i++)
	{
		printf(",");
		printf(" ");
		j = j + k;
		printf("%d", j);
		mem = k;
		k = j;
		j = mem;
	}
	printf("\n");
	return (0);
}

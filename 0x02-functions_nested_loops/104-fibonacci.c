#include <stdio.h>
#include <limits.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, l;
	unsigned long int j, k, mem;

	j = 1;
	k = 2;
	printf("%lu", j);
	printf(",");
	printf(" ");
	printf("%lu", k);
	for (i = 1; i <= 96; i++)
	{
		printf(",");
		printf(" ");
		j = j + k;
		while (j > ULONG_MAX)
		{
			l = l * 10 + j % 10;
			j = j / 10;
		}
		printf("%lu", j);
		while (l != 0)
		{
			j = j * 10 + (l % 10);
			printf("%d", l % 10);
			l = l / 10;
		}
		mem = k;
		k = j;
		j = mem;
	}
	printf("\n");
	return (0);
}

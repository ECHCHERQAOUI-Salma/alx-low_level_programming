#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long long int j, k, mem;

	j = 1;
	k = 2;
	printf("%lld", j);
	printf(",");
	printf(" ");
	printf("%lld", k);
	for (i = 1; i <= 48; i++)
	{
		printf(",");
		printf(" ");
		j = j + k;
		printf("%lld", j);
		mem = k;
		k = j;
		j = mem;
	}
	printf("\n");
	return (0);
}

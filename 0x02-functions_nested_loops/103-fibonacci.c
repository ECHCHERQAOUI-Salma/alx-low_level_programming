#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	j = 1;
	k = 2;
	i = 2;
	while (k <=  4000000)
	{
		j = j + k;
		l = k;
		k = j;
		j = l;
		if (k % 2 == 0)
			i = i + k;
	}
	printf("%d\n", i);
	return (0);
}

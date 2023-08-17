#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int n;
	int i;
	int j;
	int r;
	int f;

	n = 612852475143;
	f = 0;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			r = 0;
			r = n / i;
			for (j = 2; j <= r / 2; j++)
			{
				if (r % j == 0)
				{
					f = 0;
					break;
				}
				f = 1;
			}
			if (f == 1)
			{
				printf("%d", r);
				printf("\n");
				break;
			}
		}
	}
	return (0);
}

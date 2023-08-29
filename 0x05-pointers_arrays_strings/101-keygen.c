#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry
 *
 * Return: 0
 */
int main(void)
{
	int c, sum = 0;

	srand(time(0));
	while (sum <= 2772)
	{
		c = 32;
		c += rand() % 96;
		sum += c;
		printf("%c", c);
		if(2772 - 32 - sum < 96)
		{
			c = 2772 - sum;
			sum += c;
			printf("%c", c);
			break;
		}
	}
	return 0;
}

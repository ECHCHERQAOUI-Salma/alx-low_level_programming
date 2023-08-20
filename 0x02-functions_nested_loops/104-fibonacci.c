#include <stdio.h>
#include <limits.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int bef, aft, bef1, bef2, aft1, aft2, m = 1000000000;

	bef = 1;
	aft = 2;
	printf("%lu, %lu", bef, aft);
	for (i = 1; i <= 90; i++)
	{
		aft = aft + bef;
		bef = aft - bef;
		printf(", %lu", aft);
	}
	aft1 = aft / m;
	aft2 = aft % m;
	bef1 = bef / m ;
	bef2 = bef % m;
	printf("%d", i);
	for (i = 91; i <= 96; i++)
	{
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
		printf(", %lu", aft1 + (aft2 / m));
		printf("%lu", aft2 % m);
	}
	printf("\n");
	return (0);
}

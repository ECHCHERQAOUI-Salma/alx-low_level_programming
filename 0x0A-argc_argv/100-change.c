#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry
 *
 * @argc: c
 *
 * @argv: v
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cents / 25 != 0)
	{
		coins += cents / 25;
		cents %= 25;
	}
	if (cents / 10 != 0)
	{
		coins += cents / 10;
		cents %= 10;
	}
	if (cents / 5 != 0)
	{
		coins += cents / 5;
		cents %= 5;
	}
	if (cents / 2 != 0)
	{
		coins += cents / 2;
		cents %= 2;
	}
	if (cents == 1)
		coins += 1;
	printf("%d\n", coins);
	return (0);
}

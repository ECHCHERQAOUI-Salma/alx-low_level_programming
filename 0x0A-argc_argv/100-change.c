#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: count
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int change;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
		printf("0\n");
	if (change >= 25)
	{
		coins = coins + change / 25;
		change = change - (change / 25 * 25);
	}
	if (change >= 10)
	{
		coins = coins + change / 10;
		change = change - (change / 10 * 10);
	}
	if (change >= 5)
	{
		coins = coins + change / 5;
		change = change - (change / 5 * 5);
	}
	if (change >= 2)
	{
		coins = coins + change / 2;
		change = change - (change / 2 * 2);
	}
	coins += change;
	printf("%d\n", coins);
	return (0);
}

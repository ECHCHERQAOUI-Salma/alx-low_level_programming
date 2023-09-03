#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * @argc: c
 *
 * @argv: v
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

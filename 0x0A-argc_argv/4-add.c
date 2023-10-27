#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry
 * @argc: count
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, s = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > 57 || argv[i][j] < 48)
				{
					printf("Error\n");
					return (1);
				}
			}
			s = s + atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}

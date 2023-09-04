#include <string.h>
#include <ctype.h>
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
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) > 1)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (isdigit(*(argv[i] + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

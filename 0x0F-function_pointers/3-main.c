#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry
 * @argc: cont
 * @argv: vector
 * Return: str
 */
int main(int argc, char **argv)
{
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	     argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && atoi(argv[3]) == 0) ||
	    (argv[2][0] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	r = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);
	return (0);
}

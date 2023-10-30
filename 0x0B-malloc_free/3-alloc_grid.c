#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - alloc grid
 * @width: w
 * @height: h
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	g = malloc(sizeof(int *) * height);
	if (g == NULL)
		return (0);
	for (i = 0; i < height; i++)
		g[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}

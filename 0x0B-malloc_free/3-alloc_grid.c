#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid
 *
 * @width: width
 *
 * @height: height
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **h = malloc(height * 8);
	int *w;

	if (width <= 0 || height <= 0)
		return (0);
	if (h == NULL)
	{
		free(h);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		w = malloc(width * 4);
		if (w == NULL)
		{
			free(h);
			free(w);
			return (0);
		}
		*(h + i) = w;
		for (j = 0; j < width; j++)
			h[i][j] = 0;
	}
	return (h);
}

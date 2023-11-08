#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to array
 * @width: width
 * @height: height
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			while (i >= 0)
			{
				free(matrix[i]);
				i--;
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}

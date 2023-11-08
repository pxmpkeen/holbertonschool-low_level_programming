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
	int i, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc (sizeof(int) * height);
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = calloc(width, sizeof(int));
		if (matrix[i] == NULL)
			return (NULL);
	}
	return (matrix);
}

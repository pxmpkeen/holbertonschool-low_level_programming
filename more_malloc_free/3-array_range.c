#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - ranges array
 * @min: min
 * @max: max
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr, i = min;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	while (i < max - 1)
	{
		arr[i - min] = i;
		i++;
	}

	return (arr);
}

#include "search_algos.h"

/**
 * linear_search - linear searching algorithm implementation
 * @array: array to search in
 * @size: size of array
 * @value: value to search
 *
 * Return: index of searched value. Otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

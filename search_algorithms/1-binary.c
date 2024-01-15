#include "search_algos.h"

void print_array(int *, size_t, size_t);

/**
 * binary_search - binary searching algorithm implementation
 * @array: array to search in
 * @size: size of array
 * @value: value to search
 *
 * Return: index of searched value. Otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = i + 1;
		else
			high = i - 1;
	}

	return (-1);
}

/**
 * print_array - prints elements of array
 * @array: array to print
 * @low: low (left) bound of subarray
 * @high: high (right) bound of subarray
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i <= high)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		i++;
	}
	printf("\n");
}

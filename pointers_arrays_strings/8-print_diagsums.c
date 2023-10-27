#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of main diagonals
 * @a: a
 * @size: size of matrix in one dimension
 *
 * Return: w/o
 */
void print_diagsums(int *a, int size)
{
	int i = 0, l = 0, r = 0;

	while (i < size)
	{
		l += a[i * size + i];
		r += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", l, r);
}

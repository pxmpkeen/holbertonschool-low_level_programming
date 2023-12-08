#include <stdio.h>
/**
 * clear_bit - clears bit
 * @n: number
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int k = ((int)index < (int)sizeof(unsigned long int) * 8);

	if (k)
		*n &= ~(1 << index);
	return (1 * k + (-1) * (!k));
}

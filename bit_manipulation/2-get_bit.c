#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets bit
 * @n: number
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k = (int)sizeof(unsigned long int) * 8;

	return ((index < k) * ((n >> index) & 1) + (-1) * (index >= k));
}

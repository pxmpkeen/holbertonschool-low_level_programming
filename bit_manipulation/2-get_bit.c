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
	n >>= index;
	return (n & 1);
}

#include <stdio.h>
/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		return;
	}
	print_bin(n >> 1);
	putchar((n & 1) + 48);
}

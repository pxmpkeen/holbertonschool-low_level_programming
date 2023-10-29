#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds strings as numbers
 * @n1: num1
 * @n2: num2
 * @r: final num
 * size_r: size of final num
 *
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1s = 0, n2s = 0, i = 0, size, n1d, n2d;
	int sum, r_arr[1000] = {0}, carry = 0;

	while (*(n1 + n1s))
		n1s++;

	while (*(n2 + n2s))
		n2s++;

	size = (n1s > n2s) ? n1s : n2s;

	while (i < size)
	{
		n1d = (i < n1s) ? (n1[n1s - i - 1] - 48) : 0;
		n2d = (i < n2s) ? (n2[n2s - i - 1] - 48) : 0;
		
		sum = n1d + n2d + carry;
		*(r_arr + i) = sum % 10;
		carry = sum / 10;

        i++;
	}
	if (carry > 0)
	{
		r_arr[size] = carry;
		size++;
	}
	if (size_r <= size)
		r = 0;
	else
	{
		for (i = 0; i < size; i++)
			*(r + i) = r_arr[size - i - 1] + '0';
		*(r + size) = '\0';
	}
	return (r);
}

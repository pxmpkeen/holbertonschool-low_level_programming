#include "main.h"

/**
 * add - adds two numbers
 * @m: the first of nums
 * @n: the second of nums
 *
 * Return: Always 0 (Success)
 */

int add(int m, int n)
{
	return (m + n);
}

/**
 * power_of_ten - Finds 10 in n degree
 * @n: degree
 *
 * Return: 10 in n-th degree
 */
int power_of_ten(int n)
{
	int i = 0, j = 1;

	while (i < n)
	{
		j *= 10;
	}
	return (j);
}

#include "main.h"
/**
 * factorial - calculates factorial
 * @n: number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

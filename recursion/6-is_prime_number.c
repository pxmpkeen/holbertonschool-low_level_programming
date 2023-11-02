#include "main.h"
/**
 * _helper - helper
 * @x: x
 * @y: y
 * Return: int
 */
int _helper(int x, int y)
{
	if (x > y / 2)
		return (1);
	else if (!(y % x))
		return (0);
	else
		return (_helper(x + 1, y));
}
/**
 * is_prime_number - checks whether number is prime
 * @n: checker
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (_helper(2, n));
}

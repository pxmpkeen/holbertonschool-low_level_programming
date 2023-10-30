#include "main.h"
/**
 * _helper - helper
 * @x: x
 * @y: y
 * Return: int
 */
int _helper(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (_helper(x + 1, y));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: n
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	return (_helper(1, n));
}

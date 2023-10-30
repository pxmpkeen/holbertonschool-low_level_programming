#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - calculates pow(x, y)
 * @x: base
 * @y: degree
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 1)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else if (y == 0)
		return (1);
}

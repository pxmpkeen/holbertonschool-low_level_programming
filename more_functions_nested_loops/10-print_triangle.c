#include "main.h"

/**
 * print_triangle - checks
 * @size: times
 *
 * Return: 1 if upper, otherwise 0
 */
void print_triangle(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			_putchar(' ');
		}
		for (i = 0; i < j + 1; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

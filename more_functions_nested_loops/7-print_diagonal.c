#include "main.h"
/**
 * print_diagonal - checks
 * @n: times
 *
 * Return: 1 if upper, otherwise 0
 */
void print_diagonal(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		int i = 0;

		while (i <= j)
		{
			if (i != 0)
			{
				_putchar(' ');
			}
			i++;
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

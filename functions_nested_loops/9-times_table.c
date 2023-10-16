#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9 && i * j < 10)
			{
				_putchar(' ');
				_putchar(i * j + 48);
			}
			else if (j == 9 && i * j >= 10)
			{
				_putchar((i * j - (i * j) % 10) / 10 + 48);
				_putchar((i * j) % 10 + 48);
			}
			else if (i >= 0 && i <= 9 && j > 0 && j < 9 && i * j < 10)
			{
				_putchar(' ');
				_putchar(i * j + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i * j - (i * j) % 10) / 10 + 48);
				_putchar((i * j) % 10 + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: numbert of tables
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				content(i, j, n);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_additionals - prints additions
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
void print_additionals(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_additional_nums - prints additions nums
 * @i: The first num
 * @j: The second num
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
void print_additional_nums(int i, int j)
{
	_putchar((i * j) / 100 + 48);
	_putchar(((i * j) % 100) / 10 + 48);
	_putchar((i * j) % 10 + 48);
}

/**
 * print_additional_nums_bruh - prints additions nums
 * @i: The first num
 * @j: The second num
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
void print_additional_nums_bruh(int i, int j)
{
	_putchar(' ');
	_putchar((i * j - (i * j) % 10) / 10 + 48);
	_putchar((i * j) % 10 + 48);
}
/**
 * content - content
 * @i: The first num
 * @j: The second num
 * @n: max num
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
void content(int i, int j, int n)
{
	if (j == 0)
	{
		_putchar(48);
		print_additionals();
	}
	else if (j == n && i * j < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(i * j + 48);
	}
	else if (j == n && i * j >= 10 && i * j <= 99)
	{
		print_additional_nums_bruh(i, j);
	}
	else if (j == n && i * j >= 100)
	{
		print_additional_nums(i, j);
	}
	else if (i >= 0 && i <= n && j > 0 && j < n && i * j < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(i * j + 48);
		print_additionals();
	}
	else if (i >= 0 && i <= n && j > 0 && j < n && i * j >= 10 && i * j <= 99)
	{
		print_additional_nums_bruh(i, j);
		print_additionals();
	}
	else
	{
		print_additional_nums(i, j);
		print_additionals();
	}
}

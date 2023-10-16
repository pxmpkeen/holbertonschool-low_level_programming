#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		_putchar(((n - 2 * n) % 10) + 48);
		return ((n - 2 * n) % 10);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}

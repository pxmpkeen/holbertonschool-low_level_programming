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
	{
		int m = n * -1;

		_putchar((m % 10) + 48);
		return ((m % 10) + 48);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}

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
		int k = n % 10;
		int m = k * -1;

		_putchar(m + 48);
		return (m);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}

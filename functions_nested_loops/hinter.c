#include "main.h"
#include "_putchar.c"

/**
 * print - prints
 * @n: number printed
 *
 * Return: Always 0 success
 */
void print(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}
	_putchar((n % 10) + 48);
}

#include "main.h"
/**
 * print_number - prints n
 * @n: number
 *
 * Return: idk
 */
void print_number(int n)
{
	int i = 1;

	if (n > 0)
	{
		n = -n;
		_putchar('-');
	}
	while ((n / i) / 10 != 0)
	{
		i *= 10;
	}
	while (i != 1)
	{
		_putchar((n / i) + 48);
		n %= i;
		i /= 10;
	}
	_putchar((n % 10) + 48);
}

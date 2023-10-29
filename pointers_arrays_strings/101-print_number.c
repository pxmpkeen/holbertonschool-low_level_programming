#include "main.h"
/**
 * print_number - prints number
 * @n: int
 *
 * Return: bruh
 */
void print(int);

void print_number(int n)
{
	print(n);
}
void print(int n)
{
	unsigned int k;

	if (n < 0) {
		_putchar(45);
		k = -n;
	}
	else
		k = n;

	if (k / 10)
		print(k / 10);

	_putchar(k % 10 + '0');
}

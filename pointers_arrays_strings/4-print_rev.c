#include "main.h"

/**
 * print_rev - prints reverse
 * @s: char
 *
 * Return: just a return
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}

	while (i != 0)
	{
		_putchar(*(str + i));
		i--;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts_half - puts second half
 * @str: char
 *
 * Return: just a return
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (*(str + i) != 0)
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = i / 2;
	}

	while (*(str + n) != 0)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}

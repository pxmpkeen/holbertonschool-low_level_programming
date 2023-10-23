#include "main.h"

/**
 * _puts - prints str
 * @str: char
 *
 * Return: just a return
 */
void _puts(char *str)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
		_putchar(*(s + i));
	}
	_putchar('\n');
}

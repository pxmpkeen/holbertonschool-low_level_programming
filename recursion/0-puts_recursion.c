#include "main.h"
/**
 * _puts_recursion - puts
 * @s: string
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == 0)
		_putchar(10);
}

#include "main.h"
/**
 * more_numbers - checks
 *
 * Return: 1 if upper, otherwise 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if ( i >= 10)
		{
			_putchar(49);
		}
		if (i <= 9)
		{
			_putchar(i % 10 + 48);
		}
	}
	_putchar('\n');
}

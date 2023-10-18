#include "main.h"
#include "_putchar.c"
/**
 * print_most_numbers - checks
 *
 * Return: 1 if upper, otherwise 0
 */
int main(void)
{
	print_most_numbers();
}
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}

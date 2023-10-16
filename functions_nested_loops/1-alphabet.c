#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet()
{
	int i;

	for (i = 97; i < 122; i++)
	{
		_putchar(i);
	}
}

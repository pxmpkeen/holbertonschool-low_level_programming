#include "main.h"
/**
 * print_chessboard - chessboard
 * @a: array
 *
 * Return: w/o
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(*(*(a + i) + j));
			j++;
		}
		_putchar(10);
		i++;
	}
}

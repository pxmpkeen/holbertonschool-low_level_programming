#include "main.h"
/**
 * rev_string - reverses string
 * @s: char
 *
 * Return: just a return
 */
void rev_string(char *s)
{
	int i = 0, n;
	char tmp;

	while (*(s + i) != 0)
	{
		i++;
	}

	n = i;

	while (i >= n / 2)
	{
		tmp = *(s + i - 1);
		*(s + i) = *(s + n - i);
		*(s + n - i) = tmp;
		i--;
	}
	_putchar('\n');
}

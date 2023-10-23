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

	i = 0;
	while (i <= n / 2)
	{
		tmp = *(s + i);
		*(s + i) = *(s + n - i - 1);
		*(s + n - i - 1) = tmp;
		i++;
	}
	_putchar('\n');
}

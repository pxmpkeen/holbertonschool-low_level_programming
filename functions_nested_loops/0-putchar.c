#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";
	int l = strlen(s);
	int i;

	for (i = 0; i < l; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}

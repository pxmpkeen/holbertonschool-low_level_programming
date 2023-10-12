#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int l = strlen(s);
	int i;

	for (i = 0; i < l; i++)
	{
		putchar(s[i]);
	}
	return (1);
}

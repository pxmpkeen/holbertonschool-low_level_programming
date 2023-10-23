#include "main.h"

/**
 * _strlen - return the length of str
 * @s: char
 *
 * Return: just a return
 */
int _strlen(char *s)
{
	int i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}

	return (i);
}

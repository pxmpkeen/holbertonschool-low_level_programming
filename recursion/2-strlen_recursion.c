#include "main.h"
/**
 * _strlen_recursion - string length
 * @s: string
 *
 * Return: no return
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		return (_strlen_recursion(s + 1) + i);
	}
	else
		return (0);
}

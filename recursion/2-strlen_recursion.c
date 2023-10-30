#include "main.h"
/**
 * _strlen_recursion - string length
 * @s: string
 *
 * Return: no return
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	else if (*s == 0)
		return (i);
}

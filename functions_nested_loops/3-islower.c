#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The letter to be checked
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

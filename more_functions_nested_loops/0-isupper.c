#include "main.h"
/**
 * _isupper - checks
 * @c: checker
 *
 * Return: 1 if upper, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

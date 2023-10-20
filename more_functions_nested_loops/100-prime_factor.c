#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: idk
 */

int main(void)
{	
	long i = 2, n = 612852475143;
	
	while (i != n)
	{
		if (n % i == 0)
		{
			n /= i;
			continue;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}

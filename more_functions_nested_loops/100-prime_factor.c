#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: idk
 */

int main(void)
{	
	long int i, j = 612852475143, lf;

	for (i = 2; i < j; i++)
	{
		if (j % i == 0 && i != j)
		{
			lf = i;
			printf("%ld\n", i);
		}
	}
	return (0);
}

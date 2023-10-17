#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: initial number
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int e = 98;
	int i = 0;

	if (n > e)
	{
		while (i <= (n - e))
		{
			printf("%d", (n - i));
			if (i != (n - e))
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
	}
	else if (n < e)
	{
		while (i <= (e - n))
		{
			printf("%d", (n + i));
			if (i != (e - n))
			{
				printf(", ");
			}
			i++;

		}
		printf("\n");
	}
	else
	{
		printf("%d\n", e);
	}
}

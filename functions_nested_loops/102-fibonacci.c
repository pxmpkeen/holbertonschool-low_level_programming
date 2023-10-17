#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fib, init = 1, sec = 2;

	printf("%ld, ", init);
	printf("%ld", sec);
	for (i = 0; i < 48; i++)
	{
		fib = init + sec;
		printf(", %ld", fib);
		init = sec;
		sec = fib;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long long int fib, init = 1, sec = 2;

	printf("%lld, ", init);
	printf("%lld", sec);
	for (i = 0; i < 50; i++)
	{
		fib = init + sec;
		printf(", %lld", fib);
		init = sec;
		sec = fib;
	}
	printf("\n");
	return (0);
}

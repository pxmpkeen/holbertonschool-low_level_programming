#include <stdio.h>

int main(void)
{
	int n = 12345;
	int i = 0;
	int k = 4;
	int j = 1;

	while (i < k)
	{
		j *= 10;
		i++;
		printf("ten is: %d\n", j);
	}

	n /= j;

	printf("%d\n", n);
	return (0);
}

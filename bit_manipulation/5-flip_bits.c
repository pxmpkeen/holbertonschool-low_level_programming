/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: uint
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0, k = m ^ n;

	while (k)
	{
		if (k & 1)
			counter++;
		k >>= 1;
	}
	return (counter);
}
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}

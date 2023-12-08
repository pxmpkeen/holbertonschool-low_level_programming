/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: uint
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, k = m ^ n;

	while (k)
	{
		if (k & 1)
			counter++;
		k >>= 1;
	}
	return ((unsigned int)counter);
}

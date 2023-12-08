#include "main.h"
#include <stdio.h>
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	return ((!!n) * (n & 1) + (-1) * (!n));
}

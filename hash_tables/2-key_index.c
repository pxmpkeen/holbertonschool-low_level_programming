#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"
#include <stdlib.h>
/**
 * key_index - converts key to index using djb2 hash function
 * @key: key to convert
 * @size: size of array of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

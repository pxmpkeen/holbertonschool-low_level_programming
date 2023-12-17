#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates hash table
 * @size: size of array in hash_table_t struct
 * Return: created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	(*ht).size = size;

	(*ht).array = malloc(sizeof(hash_node_t *) * size);

	if (!(*ht).array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}

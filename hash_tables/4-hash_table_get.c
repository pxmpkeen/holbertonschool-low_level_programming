#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - returns value of given key
 * @ht: hash table
 * @key: key to find value
 * Return: value of a node with key equals key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((unsigned char *)key, (*ht).size);
	temp = (*ht).array[index];

	while (temp)
	{
		if (!strcmp((*temp).key, key))
			return ((*temp).value);
		temp = (*temp).next;
	}
	return (NULL);
}

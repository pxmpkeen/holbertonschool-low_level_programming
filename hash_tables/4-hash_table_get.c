#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - gets item of hash table
 * @ht: hash_table_t
 * @key: key
 * Return: char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || !ht || !(*key))
		return (NULL);
	index = key_index((unsigned char *)key, (*ht).size);
	temp = (*ht).array[index];
	while (temp)
	{
		if (!strcmp((*temp).key, key))
			break;
		temp = (*temp).next;
	}
	if (temp)
		return ((*temp).value);
	else
		return (NULL);
}

#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - sets a hash table
 * @ht: hash_table_t
 * @key: key
 * @value: value
 * Return: key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, (*ht).size);
	temp = (*ht).array[index];

	node = malloc(sizeof(hash_node_t));

	if (!temp)
		malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);

	(*node).key = strdup(key);
	(*node).value = strdup(value);

	if (!(*node).key || !(*node).value)
		return (0);

	if (temp)
	{
		if (!strcmp((*temp).key, key))
			(*node).next = NULL;
	}
	else if (!temp || strcmp((*temp).key, key))
		(*node).next = temp;
	(*ht).array[index] = node;

	return (1);
}

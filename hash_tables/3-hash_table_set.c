#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_set - creates node and stores data into hash table
 * @ht: hash table itself
 * @key: key stored in node and converted to index
 * @value: value stored in node
 * Return: 1 if it succeeded, 0 otherwise
 * If collision happes, node is stored in head of linked list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp, *buffer;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, (*ht).size);
	buffer = temp = (*ht).array[index], node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	while (temp)
	{
		if (!strcmp((*temp).key, key))
		{
			free((*temp).value), (*temp).value = strdup(value);
			if (!(*temp).value)
				return (0);
			return (1);
		}
		temp = (*temp).next;
	}

	(*node).key = strdup(key), (*node).value = strdup(value);

	if (!(*node).key || !(*node).value)
	{
		free(node);
		return (0);
	}

	(*node).next = buffer;
	(*ht).array[index] = node;
	return (1);
}

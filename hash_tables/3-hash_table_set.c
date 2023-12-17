#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
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
	hash_node_t *node, *temp;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, (*ht).size);
	temp = (*ht).array[index];

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	(*node).key = strdup(key);
	(*node).value = strdup(value);

	if (!(*node).key || !(*node).value)
	{
		free(node);
		return (0);
	}

	if (!temp)
	{
		(*node).next = NULL;
		(*ht).array[index] = node;
		return (1);
	}
	else if (!(*temp).next)
	{
		(*node).next = NULL;
		if (!strcmp((*temp).key, key))
			free(temp), (*ht).array[index] = node;
		else
			(*temp).next = node;
		return (1);
	}
	while (temp)
	{
		if ((*temp).next)
		{
			if (!strcmp((*(*temp).next).key, key))
			{
				node = (*(*temp).next).next;
				free((*temp).next);
				(*temp).next = node;
				temp = (*ht).array[index];
				(*node).next = temp;
				node = (*ht).array[index];
				return (1);
			}
		}
		temp = (*temp).next;
	}

	(*node).next = NULL;
	(*temp).next = node;
	return (1);
}

#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * shash_table_create - creates sorted hash table
 * @size: size of array in shash_table_t struct
 * Return: created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);

	(*ht).size = size;

	(*ht).array = malloc(sizeof(shash_node_t *) * size);

	if (!(*ht).array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
/**
 * shash_table_set - creates node and stores data into hash table
 * @ht: hash table itself
 * @key: key stored in node and converted to index
 * @value: value stored in node
 * Return: 1 if it succeeded, 0 otherwise
 * If collision happes, node is stored in head of linked list
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *temp, *buffer;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, (*ht).size);
	temp = (*ht).array[index];
	node = malloc(sizeof(shash_node_t));

	if (!node)
		return (0);

	(*node).key = strdup(key);
	(*node).value = strdup(value);

	if (!(*node).key || !(*node).value)
	{
		free(node);
		return (0);
	}

	(*node).next = temp;
	(*ht).array[index] = node;
	temp = node;

	while (temp)
	{
		if (temp && (*temp).next)
			if (!strcmp((*(*temp).next).key, key))
			{
				buffer = (*temp).next;
				(*temp).next = (*buffer).next;
				free((*buffer).value), free((*buffer).key);
				free(buffer);
			}
		temp = (*temp).next;
	}
	return (1);
}

#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_delete - deletes item of hash table
 * @ht: hash_table_t
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *node;
/**
 * temp - present node
 * node = (*temp).next
 */
	if (!ht)
		return;

	while (i < (*ht).size)
	{
		temp = (*ht).array[i];
		while (temp)
		{
			node = temp;
			temp = (*temp).next;
			free((*temp).key);
			free((*temp).value);
			free(node);
		}
		i++;
	}
	free((*ht).array);
	free(ht);
}

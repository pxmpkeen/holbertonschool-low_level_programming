#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes hash table ht
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *buffer;

	if (!ht)
		return;

	while (i < (*ht).size)
	{
		temp = (*ht).array[i];
		while (temp)
		{
			buffer = temp;
			temp = (*temp).next;
			free((*buffer).key), free((*buffer).value), free(buffer);
		}
		i++;
	}
	free((*ht).array);
	free(ht);
}

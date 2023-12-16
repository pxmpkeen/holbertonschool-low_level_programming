#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - prints item of hash table
 * @ht: hash_table_t
 */
void hasoh_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	while ((*ht).array[i])
	{
		temp = (*ht).array[i];
		while (temp)
		{
			printf("'%s': '%s'", (*temp).key, (*temp).value);
			if ((*temp).next)
				printf(", ");
			temp = (*temp).next;
		}
		i++;
	}
	printf("}");
}

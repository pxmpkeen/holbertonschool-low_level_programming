#include "0-print_list.c"
#include "3-add_node_end.c"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees list
 * @head: node in linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = (*head).next;
		free((*temp).str);
		free(temp);
	}
}

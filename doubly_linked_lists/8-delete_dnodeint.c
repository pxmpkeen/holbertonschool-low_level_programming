#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a new node at a given position.
 * @head: head
 * @index: index of the list
 * Return: node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int temp_index = 0;
	dlistint_t *temp = *head;

	if (!head || !temp)
		return (-1);
	if (!index)
	{
		if ((*temp).next)
			(*(**head).next).prev = NULL;
		*head = (**head).next;
		free(temp);
		return (1);
	}
	while (temp_index < index)
	{
		if (!(*temp).next)
			return (-1);
		temp = (*temp).next;
		temp_index++;
	}
	(*(*temp).prev).next = (*temp).next;
	if ((*temp).next)
		(*(*temp).next).prev = (*temp).prev;
	free(temp);
	return (1);
}
/*NIGAR <3*/

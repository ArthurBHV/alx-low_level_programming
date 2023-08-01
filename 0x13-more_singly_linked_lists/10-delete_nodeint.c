#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @index: index of the node to delete.
 * @head: first pointer in list
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	while (current_node != NULL && i < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);
	return (1);
}

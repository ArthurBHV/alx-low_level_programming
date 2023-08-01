#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node of
 * a listint_t linked list.
 * @index: Position of a the node to find (starting from 0)
 * @head: first node in linked list
 * Return: NULL if the node does not exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}
	if (i == index)
		return (current_node);
	else
		return (NULL);
}

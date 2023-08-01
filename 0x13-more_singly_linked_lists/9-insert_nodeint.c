#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that
 * inserts a new node at a given position
 *
 * @idx: index wher node the node is to be inserted
 * @head: first node in list
 * @n: Data of the node
 * Return: the address of the new node, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev_node, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		prev_node = *head;
		for (i = 0; i < idx - 1 && prev_node != NULL; i++)
		{
			prev_node = prev_node->next;
		}
		if (prev_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}

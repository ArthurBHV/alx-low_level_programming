#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - that adds a new node at the beginning of a listint_t list.
 * @n: data to insert in that new node
 * @head: address of first node in list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function that adds a node at the end of a listint_t list
 * @n: data to insert in the new element
 * @head: pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node;

	return (node);
}

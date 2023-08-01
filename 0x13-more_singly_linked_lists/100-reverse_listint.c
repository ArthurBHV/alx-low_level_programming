#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Write a function that reverses a listint_t list
 * @head: pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	prev_node = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}
	*head = prev_node;
	return (*head);
}

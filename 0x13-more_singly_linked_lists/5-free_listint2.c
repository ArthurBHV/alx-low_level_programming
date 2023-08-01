#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);

		current = next;
	}

	*head = NULL;
}

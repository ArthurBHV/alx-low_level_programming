#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: node to be freed
 *
 * Return: empty
 **/

void free_listint(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = head;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
}

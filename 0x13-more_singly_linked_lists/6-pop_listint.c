#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: Pointer
 * Return: 0 if the linked list is empty
 **/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == NULL)
		return (0);

	node = *head;
	*head = node->next;
	data = node->n;
	free(node);
	return (data);
}

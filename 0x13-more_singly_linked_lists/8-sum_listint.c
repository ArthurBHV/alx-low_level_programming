#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: first node in list
 * Return: 0 if the list is empty
 **/
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		add += current_node->n;
		current_node = current_node->next;
	}

	return (add);
}

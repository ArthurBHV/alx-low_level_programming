#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Write a function that prints a listint_t linked list
 * @head: pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev_node = NULL;
	const listint_t *curr_node = NULL;
	size_t counter = 0;
	size_t new_node;

	prev_node = head;
	while (prev_node)
	{
		printf("[%p] %d\n", (void *)prev_node, prev_node->n);
		counter++;
		prev_node = prev_node->next;
		curr_node = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (prev_node == curr_node)
			{
				printf("-> [%p] %d\n", (void *)prev_node, prev_node->n);
				return (counter);
			}
			curr_node = curr_node->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}

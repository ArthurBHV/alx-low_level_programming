#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: pointer tohe linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *current_list = *h;

	while (current_list != NULL)
	{
		if (current_list->next != NULL && current_list - current_list->next > 0)
		{
			free(current_list);
			length++;
			current_list = current_list->next;
		}
		else
		{
			free(current_list);
			length++;
			*h = NULL;
			break;
		}
	}
	return (length);
}

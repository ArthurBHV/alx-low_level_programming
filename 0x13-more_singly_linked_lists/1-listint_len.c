#include "lists.h"

/**
 * listint_len - that returns the number of elements in a linked listint_t list
 * @h: linked list pointer
 *
 * Return: the  number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int nodes = 0;

	tp = h;
	while (tp)
	{
		nodes++;
		tp = tp->next;
	}
	return (nodes);
}

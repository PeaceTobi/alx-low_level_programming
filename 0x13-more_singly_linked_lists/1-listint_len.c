#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked list.
 * @h: pointer of the first node
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}

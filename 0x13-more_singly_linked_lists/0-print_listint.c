#include "lists.h"

/**
 * print_listint - function that prints all elementg of a linked list
 * @h: pointer to the first node of the linked list
 * Return: nimber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nnodes++;
		h = h->next;
	}

	return (nnodes);
}

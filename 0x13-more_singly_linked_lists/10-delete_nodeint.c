#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node at index of
 * a linked list
 * @head: pointer to the first node
 * @index: index of node that should be delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	while (i < index - 1)
	{
		if (!prev || !(prev->next))
			return (-1);

		prev = prev->next;
		i++;
	}

	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}

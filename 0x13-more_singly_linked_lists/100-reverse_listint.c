#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t list
 * @head: pointer to thre first node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}

	*head = p;
	return (*head);
}

#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list.
 * @head: pointer to the first node
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_node;

	if (!head || !*head)
		return (0);

	head_node = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_node);
}

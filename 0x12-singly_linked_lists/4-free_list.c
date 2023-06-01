#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head of linked list
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new->str);
		free(new);
	}
}

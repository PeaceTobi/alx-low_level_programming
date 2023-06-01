#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of list_t list.
 * @head: head of linked list
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t count = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[count])
		count++;

	new->len = count;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}

#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * The function sets the head to NULL
 * @head: the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpmem;

	if (head == NULL)
		return;

	while (*head)
	{
		tmpmem = (*head)->next;
		free(*head);
		*head = tmpmem;
	}

	head = NULL;
}

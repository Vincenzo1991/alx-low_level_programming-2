#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp_mem;

	while (head)
	{
		temp_mem = head->next;
		free(head);
		head = temp_mem;
	}
}

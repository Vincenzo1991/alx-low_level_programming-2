#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @index: the index of the node that should be deleted
 * @head: the first node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps, *cpy = *head;
	unsigned int nde;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (nde = 0; nde < (index - 1); nde++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	temps = cpy->next;
	cpy->next = temps->next;
	free(temps);
	return (1);
}

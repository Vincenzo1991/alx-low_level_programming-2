#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index of the list where the new node should be added
 * @n: the integer of the new node
 * @head: the first node
 * Return: NULL, if cannot add new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cpy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}

	for (node = 0, node < (idx - 1); node++;)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	new->next = cpy->next;
	cpy->next = new;

	return (new);
}

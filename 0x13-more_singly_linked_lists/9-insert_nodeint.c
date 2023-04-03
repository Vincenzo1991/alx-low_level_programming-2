#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index of the list where the new node should be added
 * @n: the integer of the new node
 * @head: the first node
 * Return: NULL, if failed, else the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmp = *head;
		for (i = 0; i < (idx - 1) && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}

		if (tmp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}

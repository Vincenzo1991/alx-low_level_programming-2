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
	listint_t *new_nde, *temp_mem;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp_mem = *head;
		for (i = 0; i < (idx - 1) && temp_mem != NULL; i++)
		{
			temp_mem = temp_mem->next;
		}

		if (temp_mem == NULL)
			return (NULL);
	}

	new_nde = malloc(sizeof(listint_t));
	if (new_nde == NULL)
		return (NULL);

	new_nde->n = n;

	if (idx == 0)
	{
		new_nde->next = *head;
		*head = new_nde;
		return (new_nde);
	}
	new_nde->next = temp_mem->next;
	temp_mem->next = new_nde;
	return (new_nde);
}

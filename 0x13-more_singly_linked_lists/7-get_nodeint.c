#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the first node
 * @index: the index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_nde;

	for (n_nde = 0; n_nde < index; n_nde++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: points to the elements of a list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		printf("-> %d elements\n", h->n);
		count_node++;
		h = h->next;
	}
	return (count_node);
}

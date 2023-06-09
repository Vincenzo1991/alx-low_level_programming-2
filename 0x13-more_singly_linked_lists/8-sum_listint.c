#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: the first node
 *
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int add_d = 0;

	while (head)
	{
		add_d += head->n;
		head = head->next;
	}

	return (add_d);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: the first node
 * Return: 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int rtn;

	if (*head == NULL)
		return (0);

	tmp = *head;
	rtn = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rtn);
}

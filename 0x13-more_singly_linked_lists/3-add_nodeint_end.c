#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @n: integer for the new node
 * @head: the first node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lst;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = new;
	}

	return (*head);
}

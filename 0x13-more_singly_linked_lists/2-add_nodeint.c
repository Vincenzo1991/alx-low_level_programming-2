#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @n: the interger for the new node
 * @head: the first node in the list
 * Return: NULL, if failed, else the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nde;

	new_nde = malloc(sizeof(listint_t));
	if (new_nde == NULL)
		return (NULL);

	new_nde->n = n;
	new_nde->next = *head;

	*head = new_nde;

	return (new_nde);
}

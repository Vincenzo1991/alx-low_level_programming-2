#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Count the number of unique nodes in a looped list
 * @head: the first node
 *
 * Return: 0 If the list is not looped. Else, the number of unique nodes.
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nde = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nde++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nde++;
				tortoise = tortoise->next;
			}

			return (nde);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to the address of the @head
 * The function sets the head to NULL.
 *
 * Return: The size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temps;
	size_t nde, i;

	nde = looped_listint_count(*h);

	if (nde == 0)
	{
		for (; h != NULL && *h != NULL; nde++)
		{
			temps = (*h)->next;
			free(*h);
			*h = temps;
		}
	}

	else
	{
		for (i = 0; i < nde; i++)
		{
			temps = (*h)->next;
			free(*h);
			*h = temps;
		}

		*h = NULL;
	}

	h = NULL;

	return (nde);
}

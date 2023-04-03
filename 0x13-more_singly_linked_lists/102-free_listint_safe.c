#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - this counts the number of unique nodes
 *                      in a looped listint_t linked list.
 *
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: 0 if unsuccessful else ...
 *         the number of unique nodes in the list.
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

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
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - this frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 *
 * @h: pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: the size of the freed list.
 *
 * Description: sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t n, i;

	n = looped_listint_count(*h);

	if (n == 0)
	{
		for (; h != NULL && *h != NULL; n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (n);
}

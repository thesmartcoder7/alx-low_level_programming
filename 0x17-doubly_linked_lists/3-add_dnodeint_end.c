#include "lists.h"

/**
 * add_dnodeint_end - this adds a new node at the end
 *of a dlistint_t list.

 * @head: Pointer to the head of the dlistint_t list.
 * @n: The integer the new node will contain.
 *
 * Return: the address of the new node else NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *sm_new, *last;

	sm_new = malloc(sizeof(dlistint_t));
	if (sm_new == NULL)
		return (NULL);

	sm_new->n = n;
	sm_new->next = NULL;

	if (*head == NULL)
	{
		sm_new->prev = NULL;
		*head = sm_new;
		return (sm_new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = sm_new;
	sm_new->prev = last;

	return (sm_new);
}

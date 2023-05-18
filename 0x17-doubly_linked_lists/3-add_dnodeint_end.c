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
	dlistint_t *sm_curr = NULL, *sm_new = NULL;

	sm_new = malloc(sizeof(dlistint_t));
	if (sm_new == NULL)
		return (NULL);

	sm_new->n = n;
	if (*head)
	{
		sm_curr = *head;
		while (sm_curr->next != NULL)
			sm_curr = sm_curr->next;

		sm_new->next = NULL;
		sm_new->prev = sm_curr;
		sm_curr->next = sm_new;
		return (sm_new);
	}

	sm_new->next = *head;
	sm_new->prev = NULL;
	*head = sm_new;
	return (*head);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - this inserts a new node in a dlistint_t
 *                            list at a given position.
 *
 * @h: pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer the new node will contain.
 *
 * Return: the address of the new node on success else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *sm_new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	sm_new = malloc(sizeof(dlistint_t));
	if (sm_new == NULL)
		return (NULL);

	sm_new->n = n;
	sm_new->prev = current;
	sm_new->next = current->next;
	current->next->prev = sm_new;
	current->next = sm_new;

	return (sm_new);
}

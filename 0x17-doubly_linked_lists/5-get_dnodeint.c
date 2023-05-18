#include "lists.h"

/**
 * get_dnodeint_at_index - this locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @idx: The node to be located.
 *
 * Return:  the address of the located node on success else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
	for (; idx != 0; idx--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

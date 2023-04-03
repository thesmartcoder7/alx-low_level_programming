#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node to a listint_t
 *                           list at a given position.
 *
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @idx: index of the listint_t list where the new
 *       node should be added.
 * @n: integer for the new node to hold.
 *
 * Return: NULL if function fails.
 *         else...return the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}

	new->next = cp->next;
	cp->next = new;

	return (new);
}

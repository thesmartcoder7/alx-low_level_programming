#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 *                   end of a listint_t list.
 *
 * @head: pointer to the address of the
 *        head of the listint_t list.
 *
 * @n: integer for the new node to contain.
 *
 * Return: NULL if function fails . . .
 *         else . . . the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lst;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->nxt = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		lst = *head;
		while (lst->nxt != NULL)
			lst = lst->nxt;
		lst->nxt = new;
	}

	return (*head);
}

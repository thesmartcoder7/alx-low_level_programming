#include "lists.h"

/**
 * add_dnodeint - this function a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: Pointer to the head of the dlistint_t list.
 * @n: The integer the new node will contain.
 *
 * Return: the address of the new node if successful else NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->prev = NULL;
	add->next = *head;
	if (*head != NULL)
		(*head)->prev = add;
	*head = add;

	return (add);
}

#include "lists.h"

/**
 * reverse_listint - this function reverses a linked list.
 *
 * @head: pointer to the address of
 *        the head of the list_t list.
 *
 * Return: the pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	if (head == NULL || *head == NULL)
		return (NULL);

	last = NULL;

	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}

	(*head)->next = last;

	return (*head);
}

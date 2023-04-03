#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list.
 *
 * @head: pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: 0 if the list is empty . . .
 *         else . . . the head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (*head == NULL)
		return (0);

	temp = *head;
	res = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (res);
}

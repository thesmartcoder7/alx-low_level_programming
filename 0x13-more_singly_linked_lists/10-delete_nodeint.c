#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at a given
 *                           index of a listint_t list.
 *
 * @head: pointer to the address of the
 *        head of the listint_t list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if successful else -1.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cp = *head;
	unsigned int node;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
	}

	temp = cp->next;
	cp->next = temp->next;

	free(temp);

	return (1);
}

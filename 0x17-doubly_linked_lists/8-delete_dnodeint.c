#include "lists.h"

/**
 * delete_dnodeint_at_index - this deletes a node from a dlistint_t
 *                            at a given index.
 * @head: pointer to the head of the dlistint_t.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *sm_curr = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (sm_curr == NULL)
			return (-1);
		sm_curr = sm_curr->next;
	}

	if (sm_curr == *head)
	{
		*head = sm_curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		sm_curr->prev->next = sm_curr->next;
		if (sm_curr->next != NULL)
			sm_curr->next->prev = sm_curr->prev;
	}

	free(sm_curr);
	return (1);
}

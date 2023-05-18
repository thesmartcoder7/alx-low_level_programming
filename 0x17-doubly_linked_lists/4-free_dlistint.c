#include "lists.h"

/**
 * free_dlistint - this frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *sm_temp;

	while (head)
	{
		sm_temp = head->next;
		free(head);
		head = sm_temp;
	}
}

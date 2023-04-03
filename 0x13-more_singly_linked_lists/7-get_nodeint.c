#include "lists.h"

/**
 * get_nodeint_at_index - funciton locates a given node of
 *                        a listint_t linked list.
 *
 * @head: pointer to the head of the listint_t list.
 * @index: node index to locate.
 *
 * Return: NULL if node does not exist.
 *         else. . . return the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

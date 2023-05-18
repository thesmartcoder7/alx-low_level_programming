#include "lists.h"

/**
 * sum_dlistint - this sums all the data within the list.
 *
 * @head: The head of the list.
 *
 * Return: The sum of all the data within  the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

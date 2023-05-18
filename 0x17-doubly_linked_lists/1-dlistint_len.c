#include "lists.h"

/**
 * dlistint_len - this function the number of elements
 *in a linked dlistint_t list.
 *
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t sm_elems = 0;

	while (h)
	{
		sm_elems++;
		h = h->next;
	}

	return (sm_elems);
}

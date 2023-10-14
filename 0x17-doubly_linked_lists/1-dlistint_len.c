#include "lists.h"

/**
 * dlistint_len - count to the len
 * @h: input list
 * Return:  returns the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
	}

	return (count);
}

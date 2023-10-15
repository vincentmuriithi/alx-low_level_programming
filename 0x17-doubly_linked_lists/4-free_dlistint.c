#include "lists.h"
/**
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cr;
	if (!head)
		return;
	while (head->prev)
		head = head->prev;

	cr = head;

	while (cr->next)
	{
		cr = cr->next;
		free(head);
		head = cr;
	}


}

#include "lists.h"
/**
* free_list - fress the memory allocated to a list_t
* @head: input
* Return: returns void
*/
void free_list(list_t *head)
{
if (head == NULL)
return;

if (head->next != NULL)
{
free(head->next);
free(head);
return;
}
free(head);
return;

}

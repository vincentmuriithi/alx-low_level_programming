#include "lists.h"
/**
* free_list - fress the memory allocated to a list_t
* @head: input
* Return: returns void
*/
void free_list(list_t *head)
{
list_t *temp;

if (head == NULL)
return;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}

return;

}

#include "lists.h"
/**
* free_listint - frees the memory allocated to the list
* @head: the input list
* Return: returns void
*
*/
void free_listint(listint_t *head)
{
listint_t *temp;


while (head != NULL)
{
temp = head;
head = temp->next;
free(temp);

}

}

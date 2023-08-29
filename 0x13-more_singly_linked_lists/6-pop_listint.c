#include "lists.h"
/** pop_listint - deletes the head node and returns it's data(n)
* @head: input pointer to list
* Return: returns int data type
*
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (head == NULL)
return (0);

num = *head->n;

temp = *head;
*head = temp->next;
free(temp);

return (num);

}

#include "lists.h"
/**
* sum_listint - calculates the sum of all the nodes data
* @head: input list
* Return: returns the sum of all the nodes datas
*/
int sum_listint(listint_t *head)
{
listint_t *temp;
int sum = 0;

if (head == NULL)
return (0);

temp = head;

while (temp != NULL)
{
sum =+ temp->n;
temp = temp->next;
}

return (sum);

}

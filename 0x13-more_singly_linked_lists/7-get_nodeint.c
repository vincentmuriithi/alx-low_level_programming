#include "lists.h"
/**
* get_nodeint_at_index - finds the nth node
* @head: input list
* @index: input
* Return: returns the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
/*listint_t *temp;*/
unsigned int k = 0;

if (head == NULL)
return (NULL);

while (head->next && k <= index)
{
head = head->next;
k++;
}

return (head);

}

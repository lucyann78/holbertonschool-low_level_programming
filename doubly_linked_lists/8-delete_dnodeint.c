#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes a node in a doubly linked list.
* @head: Double pointer to the first element in the list.
* @index: Index of the node to delete.
* Return: 1 (Success), or -1 (Fail).
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
dlistint_t *current = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
if (*head)
(*head)->prev = NULL;
free(temp);
return (1);
}
while (i < index)
{
if (!temp)
return (-1);
temp = temp->next;
i++;
}
current = temp;
if (current->prev)
current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;
free(current);
return (1);
}

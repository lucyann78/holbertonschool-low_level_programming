#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a specific index.
* @h: double pointer to the head of the doubly linked list.
* @idx: index at which to insert the new node.
* @n: integer data for the new node.
* Return: pointer to the newly inserted node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp = *h;
unsigned int i = 0;
new_node = malloc(sizeof(dlistint_t));

if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;

if (*h)

(*h)->prev = new_node;
new_node->prev = NULL;
*h = new_node;
return (new_node);
}
while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}

if (!temp && i < idx)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
new_node->prev = temp;

if (temp->next)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

#include <stdlib.h>
#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list.
* @head: double pointer to the head of the list.
* @n: integer value to be added to the new node.
* Return: address of the new node, or NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp = *head;

new_node = malloc(sizeof(dlistint_t));

if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;

temp->next = new_node;
new_node->prev = temp;
return (new_node);
}

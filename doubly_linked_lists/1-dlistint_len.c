#include "lists.h"

/**
* dlistint_len - returns the number of elements in a doubly linked list.
* @h: linked list of type dlistint_t to count.
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}


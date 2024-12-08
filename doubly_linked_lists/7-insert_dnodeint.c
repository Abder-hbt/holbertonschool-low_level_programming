#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node in a doubly linked list
 *                            at a given position.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The value to store in the new node.
 *
 * Return: If successful - the address of the new node.
 *         Otherwise - NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{

dlistint_t *new, *current = *h;
unsigned int i;

if (h == NULL)
return (NULL);


new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

if (idx == 0)
{
new->next = *h;
if (*h != NULL)
(*h)->prev = new;
*h = new;
return (new);
}


for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;


if (current == NULL)
return (NULL);

if (current->next == NULL && i == idx - 1)
{
current->next = new;
new->prev = current;
return (new);
}

new->next = current->next;
if (current->next != NULL)
current->next->prev = new;

current->next = new;
new->prev = current;

return (new);
}

#include "lists.h"

/**
 * dlistint_len - Adds a new node at the beginning
 *               of a listint_t list.
 *
 * @h: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
size_t dlistint_len(const dlistint_t *h)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;

return (new);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning
 *                of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;


if (head == NULL)
return (NULL);


new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);


new->n = n;
new->next = *head;
new->prev = NULL;


if (*head != NULL)
(*head)->prev = new;

*head = new;

return (new);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node
 * @head: is the head node
 * @n: a variable
 * Return: a new node
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
*head = new;

return (new);
}

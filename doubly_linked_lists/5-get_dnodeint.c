#include "lists.h"

/**
 * free_dlistint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */

void free_dlistint2(dlistint_t **head)
{
dlistint_t *tmp;

if (head == NULL)
return;

while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}

head = NULL;
}

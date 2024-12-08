#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given
 *                            index of a dlistint_t list.
 * @head: A pointer to the address of the head of the dlistint_t list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
dlistint_t *current = *head;

if (head == NULL || *head == NULL)
return (-1);


if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}


for (unsigned int i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}

if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;

free(current);
return (1);
}

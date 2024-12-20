/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */

#include "lists.h"

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Description: This function iterates through the linked list and counts
 * the number of nodes.
 *
 * Return: The number of nodes in the linked list.
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)

{
int count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

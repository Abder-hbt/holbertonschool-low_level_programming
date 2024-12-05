/**
 * print_list - Adds a new node at the beginning of a linked list.
 * @h: A string to be duplicated and added to the new node.
 *
 * Description: This function allocates memory for a new node, duplicates
 * the string `str`, and inserts the new node at the beginning of the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
int count = 0;

if (h == NULL)
{
return (0);
}

while (h != NULL)
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);

count++;
h = h->next;
}

return (count);

}

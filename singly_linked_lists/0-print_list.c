#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: A pointer to the head of the list_t list.
 *Description: This function iterates through the linked list and prints
 * each element. If the string (`str`) of an element is NULL, it prints
 * `[0] (nil)`. Otherwise, it prints the string and its length.
 *
 *Return: The number of nodes printed.
 */

size_t print_list(const list_t *h)


{
int count = 0;

if (h == NULL)
{
return (0);
}

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
count++;
h = h->next;
}
return (count);
}

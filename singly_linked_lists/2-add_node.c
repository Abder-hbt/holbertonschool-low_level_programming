/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A double pointer to the head of the linked list.
 * @str: The string to be added to the new node (it will be duplicated).
 *
 * Return: Address of the new element, or NULL if it failed.
 */

#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
char *strC = strdup(str);
list_t *newNode = NULL;
int index = 0;

if (strC == NULL)
return (NULL);

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(strC);
return (NULL);
}

while (str[index] != '\0')
index++;

newNode->str = strC;
newNode->len = index;
newNode->next = *head;
*head = newNode;

return (newNode);
}

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to the head of the list_t list.
 * @str: A string to be duplicated and added to the new node.
 *
 * Description: This function allocates memory for a new node, duplicates
 * the string `str`, and inserts the new node at the beginning of the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)

{
char *strC = strdup(str);
list_t *newNode = NULL;


if (strC == NULL)

{
return (NULL);
}

newNode = malloc(sizeof(list_t));
if (newNode == NULL)

{
free(strC);
return (NULL);
}


newNode->str = strC;
newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;

return (newNode);

}

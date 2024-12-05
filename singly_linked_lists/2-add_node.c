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
#include "lists.h"

list_t *add_node(list_t **head, const char *str)

{

list_t *newNode = NULL;
unsigned index = 0;
char *new_str;

while (str[index] != '\0')
{
index++;
}

newNode = malloc(sizeof(list_t));
if (newNode == NULL)

{
return (NULL);
}

new_str = strdup(str);

if (new_str == NULL)
{
    free(newNode);
    return NULL;
}

newNode->str = new_str;
newNode->len = index;
newNode->next = *head;
*head = newNode;

return (newNode);

}

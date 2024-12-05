/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the pointer of the head of the list_t list.
 * @str: The string to be duplicated and added as a new node.
 *
 * Description: This function creates a new node with the given string,
 * calculates its length, and adds it to the end of the linked list.
 * If the list is empty, the new node becomes the head of the list.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */

#include"lists.h"

list_t *add_node_end(list_t **head, const char *str)

{
list_t *newNode = NULL;
char *strC = strdup(str);
list_t *temp = *head;
int index = 0;

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

while (str[index] != '\0')
{
index++;
}

newNode->str = strC;
newNode->len = index;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;

return (newNode);
}

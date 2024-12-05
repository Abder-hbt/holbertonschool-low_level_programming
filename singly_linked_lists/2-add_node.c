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

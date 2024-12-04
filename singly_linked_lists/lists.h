#ifndef lists_h
#define lists_h

#include <stddef.h>
/**
 * struct list_s - Structure pour une liste chaînée
 * @str: Chaîne de caractères (malloc'ée)
 * @len: Longueur de la chaîne
 * @next: Pointeur vers le nœud suivant
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

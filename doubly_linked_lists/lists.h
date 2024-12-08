#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x12-more_singly_linked_lists directory.
 */

#include <stdlib.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
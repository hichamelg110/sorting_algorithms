#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @node1: Pointer to the first node to swap
 * @node2: The second node to swap
 */
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
(*node1)->next = node2->next;
if (node2->next != NULL)
node2->next->prev = *node1;
        
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: Pointer to the head of a doubly linked list of integers.
 */
 void insertion_sort_list(listint_t **list)
{
listint_t *c, *v;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (c = (*list)->next; c != NULL; c = c->next)
{
for (v = c; v != NULL && v->prev != NULL; v = v->prev)
{
if (v->n < v->prev->n)
{
swap(v->prev, v);
if (!v->prev)
*list = v;
print_list((const listint_t *)*list);
}
else
break;
}
}
}


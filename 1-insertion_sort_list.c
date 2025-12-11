#include "sort.h"

/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @list: pointer to head pointer
 * @left: left node
 * @right: right node
 *
 * Return: void
 */
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	if (right->next)
		right->next->prev = left;

	right->prev = left->prev;
	left->next = right->next;

	right->next = left;
	left->prev = right;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to the head pointer of the list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *scan;

	if (!list || !*list || !((*list)->next))
		return;

	current = (*list)->next;

	while (current)
	{
		scan = current->prev;

		while (scan && current->n < scan->n)
		{
			swap_nodes(list, scan, current);
			print_list(*list);
			scan = current->prev;
		}

		current = current->next;
	}
}

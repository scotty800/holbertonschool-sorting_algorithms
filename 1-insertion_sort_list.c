#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: Double pointer to the head of the list.
 */

void insertion_sort_list(listint_t **list)
{	listint_t *current, *key, *temp;

	if (!list || !(*list))
		return;

	current = (*list)->next;

	while (current)
	{
		key = current;
		temp = current->prev;
		while (temp && temp->n > key->n)
		{

			if (temp->prev)
				temp->prev->next = key;
			key->prev = temp->prev;

			temp->next = key->next;
			if (key->next)
				key->next->prev = temp;

			key->next = temp;
			temp->prev = key;

			if (!key->prev)
				*list = key;

			temp = key->prev;


			print_list(*list);
		}
		current = current->next;
	}
}

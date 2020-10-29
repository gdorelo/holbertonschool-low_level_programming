#include "lists.h"
/**
 * list_len - list all the elements in the list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

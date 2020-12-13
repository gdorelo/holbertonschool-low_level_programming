#include "lists.h"
/**
 * dlistint_len - function that counts and returns
 * the nodes in a Double linked list
 * @h: pointer to first node (head)
 * Return: total number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; count++)
	{
		h = h->next;
	}
	return (count);
}

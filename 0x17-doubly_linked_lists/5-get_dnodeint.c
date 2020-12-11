#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of node to return
 * Return: pointer with the desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (index > dlistint_len(head) - 1)
		return (NULL);
	while (i++ < index)
		head = head->next;
	return (head);
}
/**
 * dlistint_len - function that counts and returns
 * the nodes in a Double linked list
 * @h: pointer to first node (head)
 * Return: total number nodes in the list
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

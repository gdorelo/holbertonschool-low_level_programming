#include "lists.h"
/**
 * free_listint_safe - free the list and set head to NULL
 * @h: the inital pointer to the linked list
 * Return: void return
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *freeptr;
	size_t size = 0;

	if (!h || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast && fast < slow)
	{
		freeptr = slow;
		fast = fast->next;
		slow = slow->next;
		size += 1;
		free(freeptr);
	}
	free(slow);
	size += 1;
	*h = NULL;
	return (size);

}

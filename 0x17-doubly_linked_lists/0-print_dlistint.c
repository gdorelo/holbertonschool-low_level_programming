  #include "lists.h"
/**
 * print_dlistint - function that counts 
 * the nodes in a Double linked list
 * @h: pointer to first node (head)
 * Return: total number nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

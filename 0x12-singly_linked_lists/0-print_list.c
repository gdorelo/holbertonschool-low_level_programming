#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the elements in the list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	size_t counter;

	if (!h)
		return(0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

       		counter++;
       		h = h->next;
	}
	return (counter);
}

#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: pointer to first node in the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (!head)
		return;
	while (head)
		aux = head, head = head->next, free(aux);
}

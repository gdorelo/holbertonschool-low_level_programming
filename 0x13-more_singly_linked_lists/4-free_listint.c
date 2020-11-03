#include "lists.h"
/**
 * free_listint - free the list.
 * @head: the inital pointer to the linked list
 * Return: void return
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}

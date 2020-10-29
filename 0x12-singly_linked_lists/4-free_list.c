#include "lists.h"
/**
 * free_list - free the list.
 * @head: the inital pointer to the linked list
 * Return: void return
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}

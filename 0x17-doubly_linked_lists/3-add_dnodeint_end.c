#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a list
 * @head: double pointer to the start of the list.
 * @n: integer to assign to the new_node 
 * Return: pointer to new_node 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux;

	if (!head)
		return (0);
	if (*head == NULL)
		return (add_dnodeint(head, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	aux = *head;
	while (aux)
	{
		if (aux->next == NULL)
		{
			aux->next = new_node;
			new_node->next = NULL;
			new_node->prev = aux;
			return (new_node);
		}
		aux = aux->next;
	}
	return (new_node);
}

#include "lists.h"
/**
 * add_dnodeint - add node to the start of a list
 * @head: double pointer to the start of the list.
 * @n: integer to assign to the new_node 
 * Return: pointer to new_node 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (0);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}

#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a list
 * @head: double pointer to the start of the list.
 * @n: integer to assign to the new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

}

#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a list
 * @head: double pointer to the start of the list.
 * @n: integer to assign to the new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	if (!head)
		return (0);
	if (*head == NULL)
		return (add_dnodeint(head, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	aux = *head;
	while (aux)
	{
		if (aux->next == NULL)
		{
			aux->next = new;
			new->next = NULL;
			new->prev = aux;
			return (new);
		}
		aux = aux->next;
	}
	return (new);
}
/**
 * add_dnodeint - add node to the start of a list
 * @head: double pointer to the start of the list.
 * @n: integer to assign to the new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}

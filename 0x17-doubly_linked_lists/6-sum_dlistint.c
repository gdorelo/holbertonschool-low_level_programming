#include "lists.h"
/**
 * sum_dlistint - function that sums all the nodes' data
 * @head: start of the list
 * Return: the sum of al ns
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head)
		count += head->n, head = head->next;
	return (count);
}

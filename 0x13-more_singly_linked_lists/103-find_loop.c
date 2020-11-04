#include "lists.h"
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr, *slow_ptr;
	bool is_loop;

	if (head == NULL)
		return (NULL);
	fast_ptr = head;
	slow_ptr = head;
	is_loop = false;

	while (fast_ptr && slow_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;

		if (slow_ptr == fast_ptr)
		{
			is_loop = true;
			break;
		}
	}
	if (is_loop)
	{
		fast_ptr = head->next;
		slow_ptr = head;
	}
	while (fast_ptr && fast_ptr < slow_ptr && is_loop)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (fast_ptr);
}

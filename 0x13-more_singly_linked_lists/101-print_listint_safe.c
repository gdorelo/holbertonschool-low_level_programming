#include "lists.h"
/**
 *print_listint_safe - prints all the elements of a listint
 *@head: head of list
 *Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr, *free_ptr;
	size_t size;

	size = 0;

	if (!head)
		exit(98);
	fast_ptr = head->next;
	slow_ptr = head;

	while (fast_ptr && fast_ptr < slow_ptr)
	{
		free_ptr = slow_ptr;
		fast_ptr = fast_ptr->next;
		slow_ptr = slow_ptr->next;
		size += 1;

		printf("[%p] %d\n", (void *)free_ptr, free_ptr->n);
	}
	size += 1;
	printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
	return (size);
}

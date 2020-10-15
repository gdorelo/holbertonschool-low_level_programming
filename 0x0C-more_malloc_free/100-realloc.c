#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: ptr to memory space
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: pointer to new sized memory allocation by gd
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		max = old_size;

	for (i = 0; i < max; i++)
		p[i] = oldp[i];

	free(ptr);

	return (p);
}

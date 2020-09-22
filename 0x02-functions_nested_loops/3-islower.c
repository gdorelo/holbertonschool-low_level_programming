#include "holberton.h"

/**
 * _islower- check c lowercase character
 * @c: string
 * Return: return 1 if c lowercase, 0 if not
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

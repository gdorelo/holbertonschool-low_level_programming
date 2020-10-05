#include "holberton.h"
/**
 * _memcpy - function memcpy
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: n times
 * Return: return the array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	char *src_char = (char *)src;
	char *dest_char = (char *)dest;

	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}

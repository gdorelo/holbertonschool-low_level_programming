#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - function to concatenate two strings - by gd
 * @s1: string one
 * @s2: string two
 * Return: the new array
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a = 0;
	unsigned int len1, len2, lentotal;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lentotal = len1 + len2;
	p = malloc((lentotal + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for ( ; a < len1; a++)
		p[a] = s1[a];
	for ( ; a < lentotal; a++)
		p[a] = s2[a - len1];
	p[lentotal] = '\0';
	return (p);
}
/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: character string
 * @s2: character string
 * Return: pointer that points to a newly allocated space in memory
 *The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i;
	int j;
	int c;
	int d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	a = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}
	return (a);
}

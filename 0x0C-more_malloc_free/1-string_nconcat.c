#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings by gd
 * @s1:stirng 1
 * @s2:string 2
 * @n: n bytesofstring 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;
	unsigned int len1 = 0, len2 = 0, c, a;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	p = malloc((len1 + n + 1) * sizeof(char));
	if (p == '\0')
		return (0);
	for (c = 0; c < len1; c++)
		p[c] = s1[c];
	for (a = 0; a < n; a++)
		p[c + a] = s2[a];
	p[c + a] = '\0';
	return (p);
}
/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	for ( ; *s; length++)
		s++;
	return (length);
}

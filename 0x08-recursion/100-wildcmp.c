#include "holberton.h"

int starfun(char *s1, char *star);

/**
 * strcmp - compare two strings
 * @str1: string
 * @str2: string
 *
 * Return: 1 if they are "equal", 0 otherwise.
 */
int strcmp(char *str1, char *str2)
{

if (*str2 == '*')
{
	return (starfun(str1, str2 + 1));
}
if (*str1 == '\0' || *str2 == '\0')
{
	if (*str2 == '\0' && *str1 == '\0')
		return (1);
	return (0);
}
if (*str1 == *str2)
{
	return (strcmp(str1 + 1, str2 + 1));
}
return (0);
}

/**
 * starfun - move branch horizontally if a star has been encountered
 * @s1: string
 * @star: starred string
 *
 * Return: 1 if the string matches, else 0
 */
int starfun(char *s1, char *star)
{
	if (*s1 == '\0')
		return (strcmp(s1, star));
	return (strcmp(s1, star) || starfun(s1 + 1, star));
}


/**
 * wildcmp - compares a string to a wildcard string
 * @s: string
 * @s2: wildcard string
 *
 *
 *
 * Return: 1 if match, otherwise 0
 */
int wildcmp(char *s, char *s2)
{
	return (strcmp(s, s2));
}

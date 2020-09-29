#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts a character array to an integer
 *
 * @s: character array to convert
 * Return: returns integer from array, returns 0 if none found
 */
int _atoi(char *s)
{
	int retval, i, neg;

	i = 0;
	retval = 0;
	neg = -1;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		retval = (retval * 10) + (s[i++] - '0');
	return (retval * neg);
}

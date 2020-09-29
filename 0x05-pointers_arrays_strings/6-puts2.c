#include "holberton.h"

/**
 * puts2 - print every other character from a string
 * @str: character
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i = i + 2)
	{
		_putchar (*(str + i));
	}
	_putchar ('\n');
}

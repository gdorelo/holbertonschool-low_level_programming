#include "holberton.h"

/**
 *print_numbers - prints numbers 0 to 9
 *@void: no argument
 *
 *Return: always 0
 */

int print_numbers(void)

{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');

	return (0);
}

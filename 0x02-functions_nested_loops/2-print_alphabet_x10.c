#include "holberton.h"

/**
 *print_alphabet_x10 - use local functions to create output
 *
 *Return: prints to stdout the alphabet 10 times, followed by a new line
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int l;

	while (l < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		l++;
	}
}

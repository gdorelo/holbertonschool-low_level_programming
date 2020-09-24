#include "holberton.h"

/**
 *print_square- print squares
 *@size: integer
 */
void print_square(int size)
{

	int y;
	int x;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

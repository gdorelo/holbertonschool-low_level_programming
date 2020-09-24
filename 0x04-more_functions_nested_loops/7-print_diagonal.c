#include "holberton.h"

/**
 *print_diagonal- print a diagonal line on terminal
 *@n: integer
 */

void print_diagonal(int n)

{

	int x, y;

	if (n > 0)

	{
		for (x = 0; x < n; x++)

		{
			for (y = 0; y <= n; y++)

			{
				if (x == y)
				{
					_putchar('\\');
					break;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Is the Placeholder.
 *
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int al;

		for (al = 0; al < size; al++)
		{
			int m;

			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

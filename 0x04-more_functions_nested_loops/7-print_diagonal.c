#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Is the Placeholder.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int al;

		for (al = 0; al < n; al++)
		{
			int m;

			for (m = 0; m < al; m++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

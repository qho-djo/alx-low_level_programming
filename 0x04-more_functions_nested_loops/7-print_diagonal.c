#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Is the Placeholder.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int al = 0;
	int m;

	if (n > 0)
	{
		for (; al < n; al++)
		{
			for (m = 0; m < al; m++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	_putchar('\n');
}

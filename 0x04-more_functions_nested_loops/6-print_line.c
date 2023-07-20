#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Is the Placeholder.
 */

void print_line(int n)
{
	int al = 0;

	if (n > 0)
	{
		for (; al < n; al++)
			_putchar('_');
	}
	_putchar('\n');
}

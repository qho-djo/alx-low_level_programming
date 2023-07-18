#include "main.h"
#include <stdio.h>

/**
 *  times_table - Prints out the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			m = i * j;

			if (m <= 9)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *			followed by a new line.
 */

void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		b = 0;

		while (b < 15)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			else
			{
				_putchar(b % 10 + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

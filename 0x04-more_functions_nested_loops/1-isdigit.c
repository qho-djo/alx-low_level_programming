#include "main.h"

/**
 * _isdigit - Checks for a digit through 0 - 9 ..
 * @c: Character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	int alph = '0';

	if (alph <= '9')
	{
		if (c == alph)
			return (1);
	}
	alph++;
	return (0);
}

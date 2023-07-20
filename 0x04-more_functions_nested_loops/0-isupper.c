#include "main.h"

/**
 * _isupper - Checks for Uppercase Character.
 * @c: Character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char alph = 'A';

	if (alph <= 'Z')
	{
		if (c == alph)
			return (1);
	}
	alph++;
	return (0);
}

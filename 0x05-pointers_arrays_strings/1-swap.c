#include "main.h"

/**
 * swap_int - Function that swaps the calues of two integers.
 * @a: Integer to be swaped.
 * @b: Integer to be swaped.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

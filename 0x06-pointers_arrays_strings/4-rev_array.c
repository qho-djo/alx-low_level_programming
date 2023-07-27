#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array.
 * @n: The number of elements in the array.
 *
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int start;
	int rev;
	int hold;

	for (start = 0; start < n - 1; start++)
	{
		for (rev = start + 1; rev > 0; rev--)
		{
			hold = a[rev];
			a[rev] = a[rev - 1];
			a[rev - 1] = hold;
		}
	}
}

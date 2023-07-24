#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: Pointer to string.
 *
 * Return: Reverses the string of @s.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i = i - 1; s[i] != '\0'; i--)
	_putchar(s[i]);

	_putchar('\n');
}

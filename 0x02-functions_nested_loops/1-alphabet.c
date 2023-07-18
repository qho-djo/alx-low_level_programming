#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lower case, followed by new line
 *
 * Return: Always 0.
*/

void print_alphabet(void)
{
	char al;

	al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}

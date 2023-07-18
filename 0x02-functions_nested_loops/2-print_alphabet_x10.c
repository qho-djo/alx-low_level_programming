#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet 10x  in lower case, followed by new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char al;
	int l = 0;

	while (l < 10)
	{
		al = 'a';

		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}

	_putchar('\n');
	l++;
	}

}

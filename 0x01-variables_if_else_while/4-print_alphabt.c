#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'a';

	for (i; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
		putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (a < 16)
	{
		putchar((a - 10) + 'a');
		a++;
	}
	putchar('\n');
	return (0);
}

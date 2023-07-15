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
	char y;
	while (a < 10)
	{
		y = (char)(a + '0');
		putchar(y);
		a++;
	}
	printf("\n");
	return (0);
}

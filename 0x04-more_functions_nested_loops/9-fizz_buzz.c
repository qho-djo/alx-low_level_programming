#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%s ", fb);
		}
		else if (a % 5 == 0)
		{
			printf("%s ", b);
		}
		else if (a % 3 == 0)
		{
			printf("%s ", f);
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("Buzz\n");
	return (0);
}

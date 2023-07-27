#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int count = 0;
	int start;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (s[count] != '\0')
	{
		for (start = 0; start < 5; start++)
		{
			if (s[count] == low_letters[start] || s[count] == upp_letters[start])
			{
				s[count] = numbers[start];
				break;
			}
		}
		count++;
	}

	return (s);
}

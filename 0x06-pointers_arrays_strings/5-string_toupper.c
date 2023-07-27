#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase.
 * @s: string to be converted.
 *
 * Return: pointer @dest.
 */

char *string_toupper(char *s)
{
	int start = 0;

	while (s[start] != '\0')
	{
		if (s[start] >= 'a' && s[start] <= 'z')
			s[start] = s[start] - 32;
		start++;
	}
	return (s);
}

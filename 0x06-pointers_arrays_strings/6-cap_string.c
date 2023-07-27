#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int start = 0;

	while (str[start])
	{
		while (!(str[start] >= 'a' && str[start] <= 'z'))
			start++;

		if (str[start - 1] == ' ' || str[start - 1] == '\t' ||
				str[start - 1] == '\n' || str[start - 1] == ',' ||
				str[start - 1] == ';' || str[start - 1] == '.' ||
				str[start - 1] == '!' || str[start - 1] == '?' ||
				str[start - 1] == '"' || str[start - 1] == '(' ||
				str[start - 1] == ')' || str[start - 1] == '{' ||
				str[start - 1] == '}' || start == 0)
			str[start] -= 32;
		start++;
	}
	return (str);
}

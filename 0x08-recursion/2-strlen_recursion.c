#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: string to check.
 *
 * Return: length of the @s.
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

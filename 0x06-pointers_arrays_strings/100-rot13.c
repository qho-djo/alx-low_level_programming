#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int start;
	int enc;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (start = 0; s[start] != '\0'; start++)
	{
		for (enc = 0; enc < 52; enc++)
		{
			if (s[start] == data1[enc])
			{
				s[start] = datarot[enc];
				break;
			}
		}
	}
	return (s);
}

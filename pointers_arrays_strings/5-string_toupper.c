#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_toupper - makes lowercase characters in string uppercase
 *
 * @s: string of characters
 *
 * Return: returns the string with uppercase characters
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

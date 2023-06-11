#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: the string to search
 *
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept, or null if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}


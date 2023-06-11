#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - search a string for any set of bytes
 * @s: source string
 * @accept: target matches
 * return: the string since the first found accepted character
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


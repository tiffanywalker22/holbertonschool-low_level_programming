#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for bytes
 * @s: the string
 * @accept: target matches
 * return: a pointer to index of string at first occurence
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


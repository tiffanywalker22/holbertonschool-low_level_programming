#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * leet - encodes string into 1337 leet
 * @s: the string
 * return: changes a's to 4s, e's to 3s, o's to 0s, t's to 7s, l's to 1s
 */
char *leet(char *s)
{

	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
				s[j] = b[i];
		}
	}

	return (s);
}

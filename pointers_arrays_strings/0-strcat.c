#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
 * _strcat - concatenates two strings
 *
 * @src: source string
 *
 * @dest: destination string
 *
 * return - a pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	int i;
	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + src_len] = '\0';

	return dest;
}

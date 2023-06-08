#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
 * _strncat - appends only specified number of characters in second string
 *
 * @src: source string
 *
 * @dest: destination string
 *
 * Return: a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
		dest[dest_len + n] = '\0';
	
	return(dest);
}

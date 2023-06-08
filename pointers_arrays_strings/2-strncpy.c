#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strncpy - copies the specified number of chars from one string to another
 *
 * @src: source string
 *
 * @dest: destination string
 *
 * @n: maximunm number of bytes to copy
 *
 * Return: a pointer to to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

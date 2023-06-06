#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
* _strcpy - copies the string
*
* @dest: final location
*
* @src: string copy
*
* Return: returns nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

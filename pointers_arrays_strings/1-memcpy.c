#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copy bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

		int size = n;

		if (size > 0)
		{
			int i;

			for (i = 0; i < size; i++)
				dest[i] = src[i];
		}

		return (dest);
}
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _memset - fill memory with a constant valie
 *
 * @s: pointer to memory area
 * @b: constant value
 * @n: memory area
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

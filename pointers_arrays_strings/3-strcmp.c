#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: value of difference between s1 and s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	
	return (*s1 - *s2);
}

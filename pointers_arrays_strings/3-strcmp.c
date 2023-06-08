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
	int i;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}

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

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++);

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	if (s1[i] < s2[i])
	{
		return (-15);
	}
	return (15);
}

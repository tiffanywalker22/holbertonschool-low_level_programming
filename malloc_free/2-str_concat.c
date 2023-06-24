#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to the array, null if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		len1 = 0;

	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;

	else
		len2 = strlen(s2);

	arr = malloc(sizeof(*arr) * (len1 + len2) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		arr[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		arr[i] = s2[j];

	return (arr);
}

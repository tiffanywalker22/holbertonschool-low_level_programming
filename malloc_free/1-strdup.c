#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - duplicates a string into memory
 *
 * @str - the string to duplicate
 *
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;

	arr = malloc(sizeof(*arr) * len);

	if (arr == NULL)
		return (NULL);

	while (i < len)
	{
		arr[i] = str[i];
		i++;
																}

	return (arr);
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - create array of chars and initialize with a specific char
 *
 * @size: size of the array
 *
 * @c: char to input into the array
 *
 * Return: returns pointer to the array, or NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

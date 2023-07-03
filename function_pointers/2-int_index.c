#include "function_pointers.h"
/**
 * int_index - function searches for integer
 * @array: the array
 * @size: the size of array
 * @cmp: pointer to function
 * Return: index where integer is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);
}

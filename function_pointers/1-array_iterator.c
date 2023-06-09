#include "function_pointers.h"

/**
 * array_iterator - executes a function on an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)

			action(*(array + i));
}

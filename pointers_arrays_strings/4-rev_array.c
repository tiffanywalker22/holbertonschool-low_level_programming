#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses an array of integers
 *
 * @a: array
 *
 * @n: number of elements in array
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

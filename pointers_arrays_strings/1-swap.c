#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps value of two integers
 *
 * @a: pointer a
 * @b: pointer b
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


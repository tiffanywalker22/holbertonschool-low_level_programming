#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - find natural square root of n
 *
 * @n: n
 *
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 *
 * @n: number to calculate the square root
 * @i:iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}

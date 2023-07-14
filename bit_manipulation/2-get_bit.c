#include "main.h"

/**
 * get_bit - returns the value of a bit at the given index
 * @n: num to check
 * @index: index to check the bit
 * Return: value of the bit, -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	mask = mask << index;

	if (n & mask)
		return (1);
	else
		return (0);
}

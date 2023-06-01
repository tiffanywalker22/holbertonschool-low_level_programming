#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: returns nothing
 *
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				putchar('0' + 1);
			putchar((i % 10) + '0');
		}
	putchar('\n');
	}

}

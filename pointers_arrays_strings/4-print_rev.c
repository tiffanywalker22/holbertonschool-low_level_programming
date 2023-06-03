#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @str: the string
 *
 * Returns: nothing
 */

void print_rev(char *str)
{
		int i, j;

		j = 0;
		for (i = 0; str[i] != '\0' ; i++)
			j++;

		j = (j - 1);
		for (i = j; i >= 0; i--)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints length of string, but only every other letter
 *
 * @str: the string
 *
 * Returns: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
			_putchar('\n');
}

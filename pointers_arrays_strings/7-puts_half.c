#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 *
 * @str: the string
 *
 * Returns: nothing
 */

void puts_half(char *str)
{
	int n = _strlen(str);

	for (int i = n / 2; i < n ; i++)
	{
	
		printf("%c", str[i]);
	}
	
	printf("\n");
}

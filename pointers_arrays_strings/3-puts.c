#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: the string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	fputs (str, stdout);
		
		_putchar('\n');
}

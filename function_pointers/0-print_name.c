#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @Name: the name to print
 * @f: function to execute
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

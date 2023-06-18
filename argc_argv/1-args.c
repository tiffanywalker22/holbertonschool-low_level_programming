#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int c;
	(void)argv;

	for (c = 0; c <= argc; c++)
	{}
	printf("%d\n", c - 2);

	return (0);
}


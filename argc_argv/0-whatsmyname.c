#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Retrun: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}

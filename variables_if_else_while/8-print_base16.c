#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int num;
	char alphabet;

	for (num = 0; num <= 9; num++)
	{
		putchar(48 + num);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}

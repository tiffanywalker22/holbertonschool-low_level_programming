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
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{

		}
		else
		{

			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}

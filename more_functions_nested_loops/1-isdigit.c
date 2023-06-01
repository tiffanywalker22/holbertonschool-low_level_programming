#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * _isdigit - checks for a digit
  *
  * @c: input letter or number
  *
  * Return: 1 if c is a digit, 0 otherwise
  *
  **/

int _isdigit(int c)
{
	int l = c;
	int i;
	int r = 0;

	for (i = 48 ; i < 58; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);

}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * _isupper - checks for uppercase character
  *
  * @c: input letter or number
  *
  * Return: 1 if the character is lowercase, 0 otherwise
  *
  **/

int _isupper(int c)
{
	int l = c;
	int i;
	int r = 0;

	for (i = 65 ; i < 91; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);

}

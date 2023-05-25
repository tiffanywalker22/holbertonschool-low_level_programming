#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
  * _abs - computes absolute value of integer
  *
  * @c: The number to be checked
  *
  * Return: absolute value of number or zero
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}


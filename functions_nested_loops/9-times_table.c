#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  *
  */

void times_table(void)
{
	int x, y, prod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0 ; y <= 9; y++)
		{
			prod = (x * y);
			if (y == 0)
				;
			else if (prod < 10)
			{
				putchar(' ');
			}
			else if (prod >= 10)
			{
				putchar('0' + (prod / 10));
			}
			putchar((prod % 10) + '0');
			if (y < 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');


		}
	}


}

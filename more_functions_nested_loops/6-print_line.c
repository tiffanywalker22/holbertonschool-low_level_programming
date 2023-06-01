/**
 * print_line - prints line of length i
 *
 * @n: lenth of line to print
 *
 * Return: returns nothing
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}

#include "main.h"
/**
  * print_line - prints a line using _ n times.
  * @n: number of times to print.
  */
void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

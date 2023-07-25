#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number of times to print
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, s;

		for (i = 0; i < n; i++)
		{
			for (s = 0; s < n; s++)
				if (s == 1)
				{
					_putchar('\\');
				}
				else if (s < 1)
				{
					_putchar(' ');
				}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


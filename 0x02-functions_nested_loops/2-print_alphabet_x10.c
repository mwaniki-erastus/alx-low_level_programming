#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a;
	char c;

	a = 1;
	while (a <= 10)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}
}

#include "main.h"
/**
 * print_sign - prints the sign of a number -+0
 * @n: the number to check
 * Return: 1 if n > 0
 * 1 if n < 0
 * if n = 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

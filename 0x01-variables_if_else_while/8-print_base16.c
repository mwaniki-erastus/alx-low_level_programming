#include <stdio.h>
/**
 * main - Entry point
 * Return: Always(0) Success
 */
int main(void)
{
	char n, c;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

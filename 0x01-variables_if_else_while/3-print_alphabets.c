#include <stdio.h>
/**
 * main - Entry point
 * Return: Always(0) Success
 */

int main(void)
{
	char l, u;

	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	}
	for (u = 65; u <= 90; u++)
	{
		putchar(u);
	}
	putchar('\n');

	return (0);
}

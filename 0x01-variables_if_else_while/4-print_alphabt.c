#include <stdio.h>
/**
 * main - Entry point
 * Return: Always(0) Suceess
 */
int main(void)
{
	char l;

	for (l = 97; l <= 122; l++)
	{
		if (l != 101 && l != 113)
			putchar(l);
	}
	putchar('\n');

	return (0);
}

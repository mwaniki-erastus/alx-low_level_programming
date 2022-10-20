#include <stdio.h>
/**
 * main - Entry point during execution
 * A Program that prints the alphabet in lowercase followeb by a new lne
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if ('q' != lower && 'e' != lower)
		{
			putchar (lower);
		}
	}
	putchar ('\n');
	return (0);
}

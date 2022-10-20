#include <stdio.h>
/**
 * main - Entry point during execution
 * A program that prints alphabets in followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

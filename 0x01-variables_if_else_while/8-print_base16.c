#include <stdio.h>
/**
 * main - Entry point during execution
 * A program that prints all numbers of base
 * 16 in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, o;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (o = 'a'; o <= 'f'; o++)
		putchar(o);
	putchar('\n');

	return (0);
}

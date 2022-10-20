#include <stdio.h>
/**
 * main - Entry point during execution
 * A Program that prints all single digits of base 10 starting from 0 followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - Entry point during execution
 * Program that prints all single digits of base 10 starting from 0
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

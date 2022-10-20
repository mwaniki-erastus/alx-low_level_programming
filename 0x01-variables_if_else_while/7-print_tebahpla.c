#include <stdio.h>
/**
 * main - Entry point during execution
 * Program that prints lowercase alphabet in reverse then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar (10);
	return (0);
}

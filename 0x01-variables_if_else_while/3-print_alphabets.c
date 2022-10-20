#include <stdio.h>
/**
 * main - Entry point during execution
 *  A Program that prints the alphabet un lowercase and then 
 *  in upper case then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower, upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar(10);
	return (0);
}

#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i <= 9)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	 putchar('\n');
i++;
}
return;
}

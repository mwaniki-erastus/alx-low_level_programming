#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>
#include <unistd.h>
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
}

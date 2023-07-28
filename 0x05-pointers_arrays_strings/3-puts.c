#include "main.h"
/**
 * _puts - prints a dtring to the stdout
 * @str: takes a pointer to a string parameter
 */
void _puts(char *str)
{
	int i;

	for ( i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

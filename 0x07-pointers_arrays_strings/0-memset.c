#include "main.h"
/**
 *  _memset - set a block of memory to a particular value
 *  @s: pointer to array parameter
 *  @b: THe value to set
 *  @n: number of bytes to set from the pointer
 *  Return: pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

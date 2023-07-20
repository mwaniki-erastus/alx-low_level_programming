#include <ctype.h>
#include "main.h"
/**
 * _islower - chechs for a lowercase character
 * @c: The character to print
 * Return: Always 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

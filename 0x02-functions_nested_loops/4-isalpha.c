#include <ctype.h>
#include "main.h"
/**
 * _isalpha - 1 if char is lowercase or uppercase
 * @c: character to be checked
 * Return: 1 onsuccess
 * otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

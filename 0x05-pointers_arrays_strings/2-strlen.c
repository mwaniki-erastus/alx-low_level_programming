#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: takes in a pointer to a string parameter
 * the function takes in a pointer to a string and
 * loops throug the string elements then returns
 * the number of elements
 * Return: returns the number of elements = length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include "main.h"
/**
 * _strncat - copies exactly n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n:maximum number to copy from src to dest
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

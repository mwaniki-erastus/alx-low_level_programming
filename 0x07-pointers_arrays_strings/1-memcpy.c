#include "main.h"
/**
 * _memcpy - copy n characters from original array to destination array
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n: number of bytes to be copied to destination
 * Return: pointer to destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;
	i = 0;
	j = 0;

	while (i < n)
	{
		while (j < n)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	}
	return (dest);
}

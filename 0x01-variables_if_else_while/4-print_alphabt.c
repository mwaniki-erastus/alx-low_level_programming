#include <stdio.h>

int main(void)
{
	char l;

	for(l=97;l<=122;l++)
	{
		if (l != 101 && l != 113)
			putchar(l);
	}
	putchar('\n');

	return (0);
}

#include "main.h"
int main(void)
{
	char *str;
	int len;

	str = "My First strlen!";
	len = _strlen(str);
	printf("%d\n",len);
	return (0);
}

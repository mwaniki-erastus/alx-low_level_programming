#include <stdio.h>
int main(void) 
{
	int a,b,c,d,e;
	char i;
	int j;
	long int k;
	long long int l;
        float m;	
	a = sizeof(i);
	b = sizeof(j);
	c = sizeof(k);
	d = sizeof(l);
	e = sizeof(m);
	printf("Size of char: %d byte(s)\n",a);
	printf("Size of int: %d byte(s)\n",b);
	printf("Size of long int: %d byte(s)\n",c);
	printf("Size of long long int: %d byte(s)\n",d);
	printf("Size of float: %d byte(s)\n",e);
	return (0);
}

#include <stdio.h>
int main(void){
	char i; int j; long int k; long long int l; float m; 
	printf("The size of a char: %lu byte(s) \n",(unsigned long)sizeof(i));
	printf("The size of an int : %lu byte(s) \n",(unsigned long)sizeof(j));
	printf("The size of a long int: %lu byte(s) \n",(unsigned long)sizeof(k));
	printf("The size of a long long int : %lu byte(s) \n",(unsigned long)sizeof(l));
	printf("The size of a float: %lu byte(s) \n",(unsigned long)sizeof(m));
	return (0);}

#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if(argc< 4 )
	{
		for (i=1; i < argc; i++)
		{
			product = product * atoi(argv[i]);
		}

		printf("%d\n",product);
		return 0;
	}
	else 
		printf("Error \n");
		return 1;

}

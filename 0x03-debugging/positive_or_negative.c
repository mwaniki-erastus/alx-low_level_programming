#include "main.h"
/**
 * This program tests that the function positive_or_negative() gives
 * the correct output when given a case of 0.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return;
}

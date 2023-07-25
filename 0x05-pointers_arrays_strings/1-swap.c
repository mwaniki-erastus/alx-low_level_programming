#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer parameter a
 * @b: pointer to integer parameter b
 */


void swap_int(int *a, int *b)
{
	int addr_a;
	addr_a = *a;
	*a = *b;
	*b = addr_a;
}

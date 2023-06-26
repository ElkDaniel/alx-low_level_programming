#include "main.h"

/**
 * swap_int - write the function that swaps the value of 2 integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

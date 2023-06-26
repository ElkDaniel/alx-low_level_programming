#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - entry point
 * @n: parameter
 * Return: void
 */

void reset_to_98(int *n)
{
	*n = 98;
}

#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * Return: 0 (always)
 */
int main(void)
{
	int n;

	n = 402;

	_putchar("n=%d\n", n);
	reset_to_98(&n);
	_putchar("n=%d\n", n);
	return (0);
}


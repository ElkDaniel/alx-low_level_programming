#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of the number, or -1 for error (if n < 0)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

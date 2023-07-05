#include <stdio.h>
#include "main.h"

int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 for error (if n < 0)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Recursive helper function to find square root
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}

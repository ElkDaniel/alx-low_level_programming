#include <stdio.h>
#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 for error (if n < 0)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0 || n == 1)
		return n;
	else
		return find_sqrt(n, n / 2);
}

/**
 * find_sqrt - Recursive helper function to find square root
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int find_sqrt(int n, int guess)
{
	if (guess == 0)
		return -1;

	if (guess * guess == n)
		return guess;
	else
		return find_sqrt(n, guess - 1);
}

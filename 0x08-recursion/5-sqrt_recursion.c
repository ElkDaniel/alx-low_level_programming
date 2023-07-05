#include <stdio.h>
#include "main.h"

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
	else if (n == 0 || n == 1)
		return n;
	else
		return _sqrt_helper(n, 1, n);
}

/**
 * _sqrt_helper - Recursive helper function to find square root
 * @n: The number to calculate the square root of
 * @start: The starting value for the range
 * @end: The ending value for the range
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		int sqr = mid * mid;

		if (sqr == n)
			return mid;
		else if (sqr < n)
			return _sqrt_helper(n, mid + 1, end);
		else
			return _sqrt_helper(n, start, mid - 1);
	}

	return -1;
}

#include "main.h"

/**
 * actual_prime - recursively checks if a number is prime
 * @n: number to check
 * @i: iterator
 *
 * Description: This function recursively checks if a given number `n` is a prime
 * number by iterating from `n-1` down to 1. If `i` reaches 1 without finding any
 * factors of `n`, the function returns 1, indicating that `n` is a prime number.
 * Otherwise, if `n` is divisible by `i` and `i` is greater than 0, the function
 * returns 0, indicating that `n` is not a prime number.
 *
 * Return: 1 if `n` is prime, 0 if not
 */
int actual_prime(int n, int i)
{
    if (i == 1)
        return (1);

    if (n % i == 0 && i > 0)
        return (0);

    return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime number or not
 * @n: number to check
 *
 * Description: This function checks if a number `n` is a prime number. If `n` is
 * less than or equal to 1, it returns 0 (as prime numbers are greater than 1).
 * Otherwise, it calls the `actual_prime` function with `n` and `n-1` as arguments.
 *
 * Return: 1 if `n` is prime, 0 if not
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);

    return (actual_prime(n, n - 1));
}


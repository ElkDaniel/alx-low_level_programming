#include <stdio.h>

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 11;

	if (is_prime_number(num))
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return (0);
}

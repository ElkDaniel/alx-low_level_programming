#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints a random number to the variable followed
 * by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number: %d\n", n);
if (n > 0)
{
	printf("is positive\n");
}
else if (n < 0)
{
	printf("is negative\n");
}
else
{
	printf("is zero\n");
}
printf("\n");
return (0);
}

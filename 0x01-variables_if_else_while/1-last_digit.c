#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints last digit of the number stored in the * variable, n
* Return: Always 0.
*/
int main(void)
{
int n;
int 1d;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("last digit of td is ed and is greater Than 5\n", n, ld);
}
else if ((ld) < 6 && (ld) != 0)
{
else
{
printf("last digit of td is d and is less than 6 and not 0\n", n, ld
}
else if (ld == 0)
{
printf("last digit of %d is td and is zero\n", n, 1d);
printf("last digit of %d is td and is 0\n", n, ld);
}
return (0);

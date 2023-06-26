#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	char *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar(s[i]);
}

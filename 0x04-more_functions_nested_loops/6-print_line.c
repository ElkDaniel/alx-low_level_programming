#include "main.h"
#include <stdio.h>

/* _putchar function declaration statement */
int _putchar(char c);

/**
 * print_line - Entry point
 * @n: parameter
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

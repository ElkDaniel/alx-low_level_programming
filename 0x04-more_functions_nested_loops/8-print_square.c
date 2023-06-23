#include "main.h"
#include <stdio.h>

/**
 * print_square - Entry point
 * @size: parameter
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			_putchar('\n');
		}
	}
}

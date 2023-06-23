#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry point
 * followed by a new line
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}

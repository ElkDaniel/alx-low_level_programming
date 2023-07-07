#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: On success, 1
 * On error, -1 is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

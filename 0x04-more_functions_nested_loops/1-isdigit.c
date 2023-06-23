#include "main.h"

/**
 * _isdigit - entry point
 * @c: parameter
 * Return: 0 (always)
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

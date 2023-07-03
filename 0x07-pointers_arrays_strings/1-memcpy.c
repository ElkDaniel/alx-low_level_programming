#include "main.h"

/**
 * myMemCpy - Copies a memory area from source to destination
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (size_t i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return dest;
}

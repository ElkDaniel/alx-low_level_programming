#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, repeated 10 times,
 *                      followed by a new line.
 */
void print_alphabet_x10(void)
{
	int repetition;
	char letter;

	for (repetition = 0; repetition < 10; repetition++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}

	_putchar('\n');
}

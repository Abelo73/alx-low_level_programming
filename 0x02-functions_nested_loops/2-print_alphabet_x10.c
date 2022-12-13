#include "main.h"

/**
 * void print_alphabet_x10(void) - prints 10 times alphabets in lower case
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		char c = 'a';

		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}


#include "main.h"

/**
 * main - prints alphabets in small
 *
 * Return: Always 0.
 *
 */

int print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

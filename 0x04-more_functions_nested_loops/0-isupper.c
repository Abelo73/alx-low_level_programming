#include "main.h"

/**
 * int _isupper - this functions checks uppecase or lower case letters
 * @c: takes a character to check
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

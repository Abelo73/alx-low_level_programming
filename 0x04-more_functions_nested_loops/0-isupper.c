#include "main.h"
#include <stdio.h>

/**
 * int _isupper - this functions checks uppecase or lower case letters
 * @c: data type
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{
	char c;

	while (c >= 65 && c <= 91)
	{
		return (1);
	}
	return (0);
}

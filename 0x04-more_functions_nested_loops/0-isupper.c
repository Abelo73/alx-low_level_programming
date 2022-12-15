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

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

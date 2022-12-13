#include "main.c"
/**
 * _isalpha - functons that checks for alphabetic character
 *
 * @c: char type letter
 * Return: 1 if lower case else prints 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 123)
		return (1);
	else
		return (0);
}

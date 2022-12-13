#include "main.c"

/**
 * _isalpha - functons that checks for alphabetic character
 * @c: charater c 
 * Return: Always 0;
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 123)
		return (1);
	else
		return (0);
}

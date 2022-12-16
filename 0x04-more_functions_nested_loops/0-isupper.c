#include "main.h"
/**
 * int _isupper - cheks for upper case letter
 * @c: takes character to check
 * Return: 1 if character is upper case otherwise it returns 0
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

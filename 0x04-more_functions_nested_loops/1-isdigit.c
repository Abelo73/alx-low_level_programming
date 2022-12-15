#include "main.h"
/**
 * int _isdigit - checks for a digit (0 - 9)
 *
 * @c: takes intiger c
 *
 * Return: 1 if c is digit otherwise returnc 0
 */

int _isdigit(int c)
{
	char c;

	if (c >= 0 && c <=9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

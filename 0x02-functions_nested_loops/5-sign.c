#include "main.h"
/**
 * print_sign - a functions print for seign of a numer
 * @n: value of a number assumed
 * Return: + if greater than 0  , 0 if n is zero and - if is lessthan 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(',');
	}
	else
	{
		_putchar('-');
		_putchar(',');
	}
}


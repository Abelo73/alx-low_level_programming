#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @a: int type number
 * Return: absolute value of @a
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}

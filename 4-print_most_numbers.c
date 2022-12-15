#include "main.h"
/**
 * print_most_numbers - functions to print numbers from 0 to 9
 * Return: 0 to 9
 *
 * */
void print_most_numbers(void)
{
	for (int a = 0; a <= 9; a++)
	{
		if (a ==2 && a ==4)
		{
			continue;
		}
		_putchar(a);
		_putchar('\n');
	}

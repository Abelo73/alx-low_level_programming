#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: numbers
 */
void more_numbers(void)
{
	for (int j = 0; j <= 9;j++)
	{
		for (int i = 0; i <= 14; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}

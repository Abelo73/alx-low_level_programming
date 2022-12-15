#include "main.h"
/**
 * void print_numbers - functions prints a numbers from 0 -9 followed by new line
 * Retun: numbers from 0 to 9 
 * */

void print_numbers(void)
{
	int num = 0;

	while (num >= 9)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}

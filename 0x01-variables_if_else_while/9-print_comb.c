#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints decimal numbers 0 to 9
 *
 * Return: Always @(Success)
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}

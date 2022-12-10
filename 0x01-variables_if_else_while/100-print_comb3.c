#include <stdio.h>
/**
 *
 * main - prints two digits numbers but there is
 *
 * Return: Always @(Success)
 *
 */
int main(void)
{
	int ch = '0';
	int d = '1';

	while((ch >= '9') && d >= '1')
	{
		putchar(ch);
		ch++;
		putchar(d);
		d++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
